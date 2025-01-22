#include "main.h"

float rectWidth = 56;
float rectHeight = 80;
float rectLeft = 0;
float rectTop = 0;

float timer = 0;
float maxTimer = 20;
float multiplier = 81;

int main (void)
{
    RenderWindow Window(VideoMode(1000,450),"BOX MAN",Style::Close|Style::Resize|Style::Titlebar);
    Event event;

    Texture paperBackgroundTexture;
    if (!paperBackgroundTexture.loadFromFile("paperWallpaper.jpg"))
    {
        cout << "Background could not be loaded\n";
    }

    RectangleShape paperBackground;
    paperBackground.setTexture(&paperBackgroundTexture);
    paperBackground.setSize(Vector2f(1000,450));


    Texture boxManTexture;
    if (!boxManTexture.loadFromFile("boxMan.png"))
    {
        cout << "box man sprite could not be loaded\n";
    }
    
    RectangleShape boxMan;
    boxMan.setTexture(&boxManTexture);
    boxMan.setSize(Vector2f(100,140));
    boxMan.setPosition(Vector2f(450,150));
    boxMan.setOrigin(boxMan.getSize().x / 2,boxMan.getSize().y / 2);

    IntRect rect;
    float deltaTime = 0;
    Clock gameClock;
 
    while (Window.isOpen())
    {
        while (Window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                Window.close();
            }
        }

        deltaTime = gameClock.restart().asSeconds();

        keyboards(deltaTime,boxMan); 

        rect.width = rectWidth;
        rect.height = rectHeight;
        rect.left = rectLeft;
        rect.top = rectTop;

        boxMan.setTextureRect(rect);

        Window.clear();
        Window.draw(paperBackground);
        Window.draw(boxMan);
        Window.display();
        
    }
    
    return (0);
}