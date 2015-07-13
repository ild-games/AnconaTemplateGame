#ifndef $!GAME_ABBR!$_Core_$!GAME_ABBR!$AndroidFactory_H_
#define $!GAME_ABBR!$_Core_$!GAME_ABBR!$AndroidFactory_H_

#include "$!GAME_ABBR!$PlatformFactory.hpp.hpp"
#include "../Input/GameTouch.hpp"

namespace ild
{

/**
 * @brief Everything needed to run on the Android platform.
 */
class $!GAME_ABBR!$AndroidFactory : public $!GAME_ABBR!$PlatformFactory.hpp
{
    public:
        /* getters and setters */
        GameTouch * inputHandler() override;
};

}

#endif
