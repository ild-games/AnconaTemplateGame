#include <Ancona/Core2D/Systems/Drawable/SoloImage.hpp>
#include <Ancona/Framework/Config/Config.hpp>
#include <Ancona/System/Android/AndroidFileOperations.hpp>
#include <Ancona/System/FileOperations.hpp>

#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$Game.hpp"
#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$AndroidFactory.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    PolymorphicRegistration::RegisterType<SpriteDrawable>("ild::SpriteDrawable");
    PolymorphicRegistration::RegisterType<SoloImage>("ild::SoloImage");

    ANativeActivity * activity = (ANativeActivity *) argv;
    AndroidFileOperations::internalPath(std::string(activity->internalDataPath));
    AndroidFileOperations::assetManager(activity->assetManager);

    Config::Load(*FileOperations::GetInputFileStream("Config.txt"));


    $!GAME_ABBR!$Game game(800, 600, new $!GAME_ABBR!$AndroidFactory());
    game.Run();
    
    return 0;
}
