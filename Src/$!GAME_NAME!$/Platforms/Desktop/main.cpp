#include <Ancona/Core2D/Systems/Drawable/SoloImage.hpp>
#include <Ancona/Framework/Config/Config.hpp>

#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$Game.hpp"
#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$DesktopFactory.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    PolymorphicRegistration::RegisterType<SpriteDrawable>("ild::SpriteDrawable");
    PolymorphicRegistration::RegisterType<SoloImage>("ild::SoloImage");

    Config::Load(*FileOperations::GetInputFileStream("Config.txt"));

    $!GAME_ABBR!$Game game(800, 600, new $!GAME_ABBR!$DesktopFactory());
    game.Run();
    
    return 0;
}
