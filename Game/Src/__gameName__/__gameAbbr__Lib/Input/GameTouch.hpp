#ifndef {{gameAbbr}}_Input_GameTouch_H_
#define {{gameAbbr}}_Input_GameTouch_H_

#include "{{gameAbbr}}InputHandler.hpp"

namespace ild
{

/**
 * @brief Touch input handler for {{ gameName }}
 */
class GameTouch: public {{gameAbbr}}InputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() override;
};

}

#endif
