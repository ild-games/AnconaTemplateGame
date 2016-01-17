#include "{{gameAbbr}}AndroidFactory.hpp"

using namespace ild;

GameTouch * {{gameAbbr}}AndroidFactory::inputHandler()
{
    return new GameTouch();
}
