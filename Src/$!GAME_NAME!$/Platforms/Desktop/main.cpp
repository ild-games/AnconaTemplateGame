#include <Ancona/Framework/Config/Config.hpp>

#include "../../$!GAME_NAME!$Lib/Core/$!GAME_NAME!$Game.hpp"
#include "../../$!GAME_NAME!$Lib/Core/DesktopPlatform.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    Config::Load("Config.txt");

    $!GAME_NAME!$Game game(800, 600, new DesktopPlatform());
    game.Run();
    
    return 0;
}
