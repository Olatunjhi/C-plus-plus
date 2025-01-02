#include <SFML/Graphics.hpp>
#include <iostream>
#include <filesystem>
using namespace std;
using  namespace sf;

int main (void)
{
 
    RenderWindow window(VideoMode(1000,450),"ARCHER",Style::Close|Style::Resize|Style::Titlebar);
    cout << "current directory : " << filesystem::current_path() << endl;

    Font font;
    if (!font.loadFromFile("Dosis-Light.ttf"))
    {
        cout << "font could not loaded\n";
    }

    Text text;
    text.setFont(font);
    text.setFillColor(Color::Yellow);
    text.setCharacterSize(30);
    text.setString("Game Archer");
    text.setPosition(Vector2f(425,280));


    Texture texture;
    if (!texture.loadFromFile("Archer.jpg"))
    {
        cout << "texture could not loaded\n";
    }

    Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(Vector2f(500,150));
    sprite.setScale(Vector2f(0.25,0.25));
    sprite.setOrigin(texture.getSize().x / 2.0f, texture.getSize().y / 2.0f);


    while (window.isOpen())
    {
        Event eventobj;

        while (window.pollEvent(eventobj))
        {
            if (eventobj.type == Event::Closed)
            {
                window.close();
            } 
        }
        
        if (Keyboard::isKeyPressed(Keyboard::R))
        {
            sprite.setScale(Vector2f(0.25,0.25));
            sprite.move(Vector2f(0.5,0));
            text.move(Vector2f(0.5,0));
        }
            
        if (Keyboard::isKeyPressed(Keyboard::L))
        {
            sprite.setScale(Vector2f(-0.25,0.25));
            sprite.move(Vector2f(-0.5,0));
            text.move(Vector2f(-0.5,0));
        }   

        window.clear();
        window.draw(text);
        window.draw(sprite);
        window.display();
    }
    return (0);
}