#ifndef {{gameAbbr}}_Core_{{gameAbbr}}PlatformFactory_H_
#define {{gameAbbr}}_Core_{{gameAbbr}}PlatformFactory_H_

#include "../Input/{{gameAbbr}}InputHandler.hpp"

namespace ild
{

/**
 * @brief Defines everything all platforms must provide to run the game on
 */
class {{gameAbbr}}PlatformFactory
{
    public:
        /* getters and setters */
        virtual {{gameAbbr}}InputHandler * inputHandler() = 0;

};

}

#endif
