#ifndef {{gameAbbr}}_Core_{{gameAbbr}}AndroidFactory_H_
#define {{gameAbbr}}_Core_{{gameAbbr}}AndroidFactory_H_

#include "{{gameAbbr}}PlatformFactory.hpp"
#include "../Input/GameTouch.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Android platform.
 */
class {{gameAbbr}}AndroidFactory : public {{gameAbbr}}PlatformFactory
{
    public:
        /* getters and setters */
        GameTouch * inputHandler() override;
};

}

#endif
