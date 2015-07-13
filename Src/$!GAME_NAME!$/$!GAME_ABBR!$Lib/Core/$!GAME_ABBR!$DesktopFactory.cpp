#include "$!GAME_ABBR!$DesktopFactory.hpp"

using namespace ild;

GameKeyboard * $!GAME_ABBR!$DesktopFactory::inputHandler()
{
    return new GameKeyboard();
}
