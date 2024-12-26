#include <SFML/Graphics.hpp>
using namespace sf;

int main (void)
{
    RenderWindow window(VideoMode(1000,500),"SHAPES",Style::Close|Style::Resize|Style::Titlebar);

    RectangleShape shape;
    shape.setSize(Vector2f(500,100));
    shape.setFillColor(Color::Yellow);
    shape.setPosition(Vector2f(700,10));

    CircleShape circle;
    circle.setRadius(30);
    circle.setFillColor(Color::Red);
    circle.setPosition(Vector2f(500,10));


    while (window.isOpen())
    {
        Event event;

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }

       if (Keyboard::isKeyPressed(Keyboard::F))
        {
            shape.move(Vector2f(5,0));
        }

        if (Keyboard::isKeyPressed(Keyboard::B))
        {
            shape.move(Vector2f(-5,0));
        }

        if (Keyboard::isKeyPressed(Keyboard::U))
        {
            shape.move(Vector2f(0,-5));
        }

        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            shape.move(Vector2f(0,5));
        }
        
        if (Keyboard::isKeyPressed(Keyboard::H))
        {
            circle.move(Vector2f(5,0));
        }

        if (Keyboard::isKeyPressed(Keyboard::J))
        {
            circle.move(Vector2f(-5,0));
        }

        if (Keyboard::isKeyPressed(Keyboard::K))
        {
            circle.move(Vector2f(0,-5));
        }

        if (Keyboard::isKeyPressed(Keyboard::L))
        {
            circle.move(Vector2f(0,5));
        }


        window.clear();
        window.draw(shape);
        window.draw(circle);
        window.display();
    }

    return (0);
}