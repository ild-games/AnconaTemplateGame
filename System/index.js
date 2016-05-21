/**
 * Used to prompt the user for information needed to instantiate a template for a system using the Ancona engine.
 */
module.exports = function(tools) {
    var context = {
        systemName: "",
        includeGuardSegment: ""
    };

    function isUnderSourceDirectory() {
        var curPath = tools.Path.cwd();
        var srcDirFound = false;
        var atRootDirectory = false;
        while (!srcDirFound && !atRootDirectory) {
            atRootDirectory = curPath.toString() === curPath.parent().toString();
            curPath = curPath.parent();
            srcDirFound = curPath.append("Src").exists();
        }

        return srcDirFound;
    }

    function generateIncludeGuardSegment() {
        var srcSegments = tools.Path.cwd().toString().split("Src");

        return srcSegments[srcSegments.length - 1]
            .split(tools.Path.folderSeparator())
            .join("_")
            .substring(1);
    }

    function isValidFile(input) {
        var regex = /^[a-z]+$/i;

        if (!regex.test(input)) {
            throw Error(tools.errorMessage("The filename may only have alphabetic characters."));
        }

        var hppPath = tools.Path.cwd().append(input + "System.hpp");
        var hppPathExists = hppPath.exists();
        var cppPath = tools.Path.cwd().append(input + "System.cpp");
        var cppPathExists = cppPath.exists();
        if (hppPathExists || cppPathExists) {
            throw Error(tools.errorMessage("File(s) already exists: \n" +
                (hppPathExists ? hppPath + "\n" : "") +
                (cppPathExists ? cppPath + "\n" : "")));
        }
        return input;
    }

    function isValidAbbr(input) {
        var regex = /^[a-z]+$/i;

        if (!regex.test(input)) {
            throw Error(tools.errorMessage("The name cannot contain any spaces."));
        }

        return input;
    }

    if (!isUnderSourceDirectory()) {
        throw Error(tools.errorMessage("Systems must be generated in an Ancona game source code directory."));
    }
    context.includeGuardSegment = generateIncludeGuardSegment();
    return tools.prompt.ask("System name, don't include 'System' (ex: Drawable): ", isValidFile).then(function(systemName) {
        context.systemName = systemName;
        return context;
    });
}
