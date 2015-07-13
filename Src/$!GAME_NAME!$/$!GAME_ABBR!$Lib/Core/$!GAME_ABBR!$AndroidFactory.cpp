#include "$!GAME_ABBR!$AndroidFactory.hpp"

using namespace ild;

GameTouch * $!GAME_ABBR!$AndroidFactory::inputHandler()
{
    return new GameTouch();
}
