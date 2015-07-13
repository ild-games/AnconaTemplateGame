#ifndef $!GAME_ABBR!$_Core_$!GAME_ABBR!$DesktopFactory_H_
#define $!GAME_ABBR!$_Core_$!GAME_ABBR!$DesktopFactory_H_

#include "$!GAME_ABBR!$PlatformFactory.hpp"
#include "../Input/GameKeyboard.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Desktop platform.
 */
class $!GAME_ABBR!$DesktopFactory : public $!GAME_ABBR!$PlatformFactory
{
    public:
        /* getters and setters */
        GameKeyboard * inputHandler() override;
};

}

#endif
