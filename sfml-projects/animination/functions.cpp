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
    if (!Keyboard::isKeyPressed(Keyboard::Up) && !Keyboard::isKeyPressed(Keyboard::Down))
    {
        yVel = 0;
    }
    
    if (!Keyboard::isKeyPressed(Keyboard::Right) && !Keyboard::isKeyPressed(Keyboard::Left))
    {
        xVel = 0;
        animinatePlayer("idle", keyboardDeltaTime);
    }

    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        animinatePlayer("walking", keyboardDeltaTime);
        xVel = 4 * multiplier * keyboardDeltaTime;
        boxMan.setScale(1,1);
    }

    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        animinatePlayer("walking", keyboardDeltaTime);
        xVel = -4 * multiplier * keyboardDeltaTime;
        boxMan.setScale(-1,1);
    }

    if (Keyboard::isKeyPressed(Keyboard::Up))
    {
        yVel = -4 * multiplier * keyboardDeltaTime;
    }
        
    if (Keyboard::isKeyPressed(Keyboard::Down))
    {
       yVel = 4 * multiplier * keyboardDeltaTime;
    }
}

void collisionDitection(RectangleShape &boxMan)
{
    float leftEdge = boxMan.getPosition().x - boxMan.getSize().x / 2;
    float rightEdge = boxMan.getPosition().x + boxMan.getSize().x /2;
    float topEdge = boxMan.getPosition().y - ((boxMan.getSize().y / 2) - 20);
    float bottomEdge = boxMan.getPosition().y + boxMan.getSize().y / 2;

    if (leftEdge < 0)
    {
        boxMan.setPosition(Vector2f(boxMan.getSize().x / 2,boxMan.getPosition().y));
    }

    if (rightEdge > 1000)
    {
        boxMan.setPosition(Vector2f(1000 - boxMan.getSize().x / 2,boxMan.getPosition().y));
    }

    if (topEdge < 0)
    {
        boxMan.setPosition(Vector2f(boxMan.getPosition().x,(boxMan.getSize().y / 2) - 20));
    }

    if (bottomEdge > 450)
    {
        boxMan.setPosition(Vector2f(boxMan.getPosition().x,450 - boxMan.getSize().y / 2));
    }
}