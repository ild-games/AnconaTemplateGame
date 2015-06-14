#ifndef $!GAME_ABBR!$_Core_DesktopPlatform_H_
#define $!GAME_ABBR!$_Core_DesktopPlatform_H_

#include "PlatformBase.hpp"
#include "../Input/GameKeyboard.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Desktop platform.
 */
class DesktopPlatform : public PlatformBase
{
    public:
        /* getters and setters */
        GameKeyboard * inputHandler() override;
};

}

#endif
