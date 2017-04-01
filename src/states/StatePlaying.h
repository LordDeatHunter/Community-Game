#pragma once

#include <SFML/Graphics.hpp>

#include "StateBase.h"

#include "../level/TileMap.h"

class Application;

namespace State
{
    class SPlaying : public SBase
    {
        public:
            SPlaying(Application* app);

            void event  (sf::Event& event)  override;
            void input  ()                  override;
            void update (float dt)          override;
            void render (sf::RenderWindow& window) override;

        private:
            Application* m_pApplication;

            sf::RectangleShape m_testSprite;
            sf::Vector2f m_testVelocity;

            Level::TileMap m_tileMap;


    };
}
