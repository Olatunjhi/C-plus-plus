#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

int main (void)
{
    //setting up window
    RenderWindow window(VideoMode(1000,450),"RectangleShape & Texture",Style::Close|Style::Resize|Style::Titlebar);

    //checking if image loaded successfully
    Texture archerImageTexture;
    if (!archerImageTexture.loadFromFile("Archer.jpg"))
    {
        cout << "archer image texture could not be loaded\n";
    }

    //checking if background texture loaded successfully
    Texture paperBackgroundTexture;
    if (!paperBackgroundTexture.loadFromFile("paperWallpaper.jpg"))
    {
        cout << "paper wallpaper background could not be loaded\n";
    }

    //setting up paper background
    RectangleShape paperBackground;
    paperBackground.setSize(Vector2f(1000,450));
    paperBackground.setTexture(&paperBackgroundTexture);

    //setting up archer image
    RectangleShape archerImage;
    archerImage.setSize(Vector2f(200,200));
    archerImage.setTexture(&archerImageTexture);
    archerImage.setOrigin(archerImage.getSize().x / 2.0f, archerImage.getSize().y / 2.0f);
    archerImage.setPosition(Vector2f(500,100));

    //creatw window while maintain it open with loop
    while (window.isOpen())
    {
        Event event;

        //linking event to window
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }

        //setting R to rotate the texture
        if (Keyboard::isKeyPressed(Keyboard::R))
        {
            archerImage.rotate(5);
        }

        window.clear();
        window.draw(paperBackground);
        window.draw(archerImage);
        window.display();
        
    }
    
    return (0);
}