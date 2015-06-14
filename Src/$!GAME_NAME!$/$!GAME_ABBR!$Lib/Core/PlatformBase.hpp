#ifndef $!GAME_ABBR!$_Core_PlatformBase_H_
#define $!GAME_ABBR!$_Core_PlatformBase_H_

#include "../Input/$!GAME_ABBR!$InputHandler.hpp"

namespace ild
{

/**
 * @brief Defines everything all platforms must provide to run the game on
 */
class PlatformBase
{
    public:
        /* getters and setters */
        virtual $!GAME_ABBR!$InputHandler * inputHandler() = 0;

};

}

#endif
