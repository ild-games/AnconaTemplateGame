#ifndef {{gameAbbr}}_Core_{{gameAbbr}}DesktopFactory_H_
#define {{gameAbbr}}_Core_{{gameAbbr}}DesktopFactory_H_

#include "{{gameAbbr}}PlatformFactory.hpp"
#include "../Input/GameKeyboard.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Desktop platform.
 */
class {{gameAbbr}}DesktopFactory : public {{gameAbbr}}PlatformFactory
{
    public:
        /* getters and setters */
        GameKeyboard * inputHandler() override;
};

}

#endif
