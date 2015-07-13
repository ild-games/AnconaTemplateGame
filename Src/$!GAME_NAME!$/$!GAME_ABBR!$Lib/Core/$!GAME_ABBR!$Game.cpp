#include <Ancona/Framework/Resource/ResourceLoaderInit.hpp>

#include "$!GAME_ABBR!$Game.hpp"
#include "../Screens/TestScreen.hpp"

using namespace ild;

$!GAME_ABBR!$Game::$!GAME_ABBR!$Game(
        int width,
        int height,
        $!GAME_ABBR!$PlatformFactory.hpp * platform) :
    Game(width, height, "$!GAME_FULL_NAME!$"),
    _platform(platform)
{
    CreateInitialScreen();
    ResourceLoaderInit::Init();
}

void $!GAME_ABBR!$Game::CreateInitialScreen()
{
    _screenManager->Push(
            new TestScreen(*_screenManager, _platform->inputHandler()));
}
