#include <Ancona/Framework/Config/Config.hpp>

#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$Game.hpp"
#include "../../$!GAME_ABBR!$Lib/Core/DesktopPlatform.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    Config::Load("Config.txt");

    $!GAME_ABBR!$Game game(800, 600, new DesktopPlatform());
    game.Run();
    
    return 0;
}
