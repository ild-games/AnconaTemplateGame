#ifndef $!GAME_NAME!$_Core_PlatformBase_H_
#define $!GAME_NAME!$_Core_PlatformBase_H_

namespace ild
{

/**
 * @brief Defines everything all platforms must provide to run the game on
 */
class PlatformBase
{
    public:
        /* getters and setters */
        virtual $!GAME_NAME!$InputHandler * inputHandler() = 0;

};

}

#endif
