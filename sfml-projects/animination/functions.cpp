#include "main.h"

void animinatePlayer(string activity, float activityDeltaTime)
{
    if (activity == "walking")
    {
        rectTop = 80;
        timer += 1 * multiplier * activityDeltaTime;
        if (timer > maxTimer)
        {
            timer = 0;
            rectLeft += rectWidth;
            if (rectLeft > 112)
            {
                rectLeft = 0;
            }
        }
    }

    if (activity == "idle")
    {
        timer += 1 * multiplier * activityDeltaTime;
        if (timer > maxTimer)
        {
            rectTop = 0;
            timer = 0;
            rectLeft += rectWidth;
            if (rectLeft > 112)
            {
                rectLeft = 0;
            }
        }
    }
}

void keyboards(float keyboardDeltaTime, RectangleShape &boxMan)
{
    if (!Keyboard::isKeyPressed(Keyboard::Right) && !Keyboard::isKeyPressed(Keyboard::Left))
    {
        animinatePlayer("idle", keyboardDeltaTime);
    }

    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        animinatePlayer("walking", keyboardDeltaTime);
        boxMan.move(Vector2f(4 * multiplier * keyboardDeltaTime,0));
        boxMan.setScale(1,1);
    }

    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        animinatePlayer("walking", keyboardDeltaTime);
        boxMan.move(Vector2f(-4 * multiplier * keyboardDeltaTime,0));
        boxMan.setScale(-1,1);
    }

    if (Keyboard::isKeyPressed(Keyboard::Up))
    {
        boxMan.move(Vector2f(0,-4 * multiplier * keyboardDeltaTime));
    }
        
    if (Keyboard::isKeyPressed(Keyboard::Down))
    {
        boxMan.move(Vector2f(0,4 * multiplier * keyboardDeltaTime));
    }
}