#include "{{gameAbbr}}DesktopFactory.hpp"

using namespace ild;

GameKeyboardAndMouse * {{gameAbbr}}DesktopFactory::inputHandler()
{
    return new GameKeyboardAndMouse();
}
