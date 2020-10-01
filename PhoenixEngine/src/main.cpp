#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "PhoenixEngine");

    // define a triangle
    sf::CircleShape triangle(80.f, 3);
    triangle.setPosition(0.f, 00.f);

    // define a square
    sf::CircleShape square(80.f, 4);
    square.setPosition(120.f, 120.f);

    // define an octagon
    sf::CircleShape octagon(80.f, 8);
    octagon.setPosition(290.f,120.f);

    // define a circle with radius = 200
    sf::CircleShape circle(200.f);
    // change the radius to 40
    circle.setRadius(40.f);
    circle.setPosition(350.f, 350.f);

    // change the number of sides (points) to 100
    circle.setPointCount(100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(triangle);
        window.draw(square);
        window.draw(octagon);
        window.draw(circle);
        window.display();
    }

    return 0;
}