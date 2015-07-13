#include <Ancona/Framework/Config/Config.hpp>
#include <Ancona/System/Android/AndroidPlatform.hpp>
#include <Ancona/System/Platform.hpp>

#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$Game.hpp"
#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$AndroidFactory.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    PolymorphicRegistration::RegisterType<SpriteDrawable>("ild::SpriteDrawable");

    AndroidPlatform::assetManager((AAssetManager *) argv);

    Config::Load(*Platform::GetInputFileStream("Config.txt"));

    $!GAME_ABBR!$Game game(800, 600, new $!GAME_ABBR!$AndroidFactory());
    game.Run();
    
    return 0;
}
