/**
 * Used to prompt the user for information needed to instantiate a template for a game using the Ancona engine.
 */
module.exports = function(tools) {
    var context = { 
        gameName: "",
        gameAbbr: ""
    };

    function isValidInput(input) {
        var regex = /^[a-z]+$/i;

        if (!regex.test(input)) {
            throw Error(tools.errorMessage("The name cannot contain any spaces."));
        }

        return input;
    }

    return tools.prompt.ask("Game name (ex: Duckling): ", isValidInput).then(function(gameName) {
        context.gameName = gameName;
        return tools.prompt.ask("Game abbreviation (ex: DUC): ", isValidInput);
    }).then(function(gameAbbr) {
        context.gameAbbr = gameAbbr; 
        return context;
    });
}
