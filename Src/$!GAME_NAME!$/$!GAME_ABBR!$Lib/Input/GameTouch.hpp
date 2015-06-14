#ifndef $!GAME_ABBR!$_Input_GameTouch_H_
#define $!GAME_ABBR!$_Input_GameTouch_H_

#include "$!GAME_ABBR!$InputHandler.hpp"

namespace ild
{

/**
 * @brief Touch input handler for $!GAME_NAME!$
 */
class GameTouch: public $!GAME_ABBR!$InputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() override;
};

}

#endif
