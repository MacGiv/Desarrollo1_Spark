#include "player.h"

namespace spark_luchelli
{

void initializePlayer(Player& auxPlayer) 
{
    auxPlayer.speed = 250;
    auxPlayer.width = 30;
    auxPlayer.height = 30;
    auxPlayer.posX = static_cast<float>(GetScreenWidth() / 8);
    auxPlayer.posY = static_cast<float>(GetScreenHeight() / 2 - auxPlayer.height / 2);
}

void resetPlayer(Player& auxPlayer) 
{
    auxPlayer.posX = 50;
    auxPlayer.posY = static_cast<float>(GetScreenHeight() / 2 - auxPlayer.height / 2);
}

void movePlayerUp(Player& auxPlayer) 
{
    if (auxPlayer.posY > 0) 
    {
        auxPlayer.posY += static_cast<float>(-100.0f);
    }
}

void movePlayerDown(Player& auxPlayer) 
{
    if (auxPlayer.posY < GetScreenHeight() - auxPlayer.height)
    {
        auxPlayer.posY += auxPlayer.speed * GetFrameTime();
    }
}

void drawPlayer(Player& auxPlayer) 
{
    DrawRectangle(static_cast<int>(auxPlayer.posX), static_cast<int>(auxPlayer.posY), auxPlayer.width, auxPlayer.height, BLUE);
}

} // namespace spark_luchelli