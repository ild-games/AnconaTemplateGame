#ifndef $!GAME_NAME!$_Systems_$!GAME_NAME!$GameSystems_H_
#define $!GAME_NAME!$_Systems_$!GAME_NAME!$GameSystems_H_

#include <Ancona/Framework/EntityFramework/SystemManager.hpp>
#include <Ancona/Framework/Screens/ScreenManager.hpp>
#include <Ancona/Framework/Systems/ScreenSystemsContainer.hpp>

namespace ild
{

/**
 * @brief 
 */
class $!GAME_NAME!$GameSystems : public ScreenSystemsContainer
{
    public:
        /**
         * @brief Constructs the game systems for $!GAME_NAME!$
         *
         * @param screenManager Screen Manager for the game.
         */
        $!GAME_NAME!$GameSystems(ScreenManager & screenManager);

    private:
};

}

#endif
