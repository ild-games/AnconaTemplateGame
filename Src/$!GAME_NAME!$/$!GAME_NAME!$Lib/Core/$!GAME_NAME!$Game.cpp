#include "$!GAME_NAME!$Game.hpp"
#include "../Screens/TestScreen.hpp"

using namespace ild;

$!GAME_NAME!$Game::$!GAME_NAME!$Game(
        int width,
        int height,
        PlatformBase * platform) :
    Game(width, height, "$!GAME_NAME!$"),
    _platform(platform)
{
    CreateInitialScreen();
    ResourceLoaderInit::Init();
}

void $!GAME_NAME!$Game::CreateInitialScreen()
{
    _screenManager->Push(
            new TestScreen(*_screenManager, _platform->inputHandler()));
}
