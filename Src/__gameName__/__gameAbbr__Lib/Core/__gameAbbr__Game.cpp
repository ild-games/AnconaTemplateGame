#include <Ancona/Framework/Resource/ResourceLoaderInit.hpp>

#include "{{gameAbbr}}Game.hpp"
#include "../Screens/TestScreen.hpp"

using namespace ild;

{{gameAbbr}}Game::{{gameAbbr}}Game(
        int width,
        int height,
        {{gameAbbr}}PlatformFactory * platform) :
    Game(width, height, "{{ gameName }}"),
    _platform(platform)
{
    CreateInitialScreen();
    ResourceLoaderInit::Init();
}

void {{gameAbbr}}Game::CreateInitialScreen()
{
    _screenManager->Push(
            new TestScreen(*_screenManager, _platform->inputHandler()));
}
