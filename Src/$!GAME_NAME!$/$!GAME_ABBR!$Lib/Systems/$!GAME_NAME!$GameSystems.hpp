#ifndef $!GAME_ABBR!$_Systems_$!GAME_ABBR!$GameSystems_H_
#define $!GAME_ABBR!$_Systems_$!GAME_ABBR!$GameSystems_H_

#include <Ancona/Framework/EntityFramework/SystemManager.hpp>
#include <Ancona/Framework/Screens/ScreenManager.hpp>
#include <Ancona/Framework/Systems/ScreenSystemsContainer.hpp>

namespace ild
{

/**
 * @brief Game systems used by $!GAME_NAME!$
 */
class $!GAME_ABBR!$GameSystems : public ScreenSystemsContainer
{
    public:
        /**
         * @brief Constructs the game systems for $!GAME_NAME!$
         *
         * @param screenManager Screen Manager for the game.
         */
        $!GAME_ABBR!$GameSystems(ScreenManager & screenManager);

    private:
};

}

#endif
