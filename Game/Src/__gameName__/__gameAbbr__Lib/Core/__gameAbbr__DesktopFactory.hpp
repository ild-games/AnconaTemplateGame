#ifndef {{gameAbbr}}_Core_{{gameAbbr}}DesktopFactory_H_
#define {{gameAbbr}}_Core_{{gameAbbr}}DesktopFactory_H_

#include "{{gameAbbr}}PlatformFactory.hpp"
#include "../Input/GameKeyboardAndMouse.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Desktop platform.
 */
class {{gameAbbr}}DesktopFactory : public {{gameAbbr}}PlatformFactory
{
    public:
        /* getters and setters */
        GameKeyboardAndMouse * inputHandler() override;
};

}

#endif
