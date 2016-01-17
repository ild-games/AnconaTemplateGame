#include "{{gameAbbr}}DesktopFactory.hpp"

using namespace ild;

GameKeyboard * {{gameAbbr}}DesktopFactory::inputHandler()
{
    return new GameKeyboard();
}
