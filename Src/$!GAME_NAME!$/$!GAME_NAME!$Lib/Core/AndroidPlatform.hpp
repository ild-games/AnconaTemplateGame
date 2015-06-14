#ifndef $!GAME_NAME!$_Core_AndroidPlatform_H_
#define $!GAME_NAME!$_Core_AndroidPlatform_H_

#include "PlatformBase.hpp"
#include "../Input/GameTouch.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Android platform.
 */
class AndroidPlatform : public PlatformBase
{
    public:
        /* getters and setters */
        GameTouch * inputHandler() override;
};

}

#endif
