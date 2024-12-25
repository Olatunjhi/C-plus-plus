#include <SFML/Graphics.hpp>
using namespace sf;

int main(void)
{
    RenderWindow window(VideoMode(1000,500),"create_Window",Style::Close|Style::Resize|Style::Titlebar);

    while (window.isOpen())
    {
        Event eventObj;

        while (window.pollEvent(eventObj))
        {
            if (eventObj.type == Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
        
    }

    return (0);
}