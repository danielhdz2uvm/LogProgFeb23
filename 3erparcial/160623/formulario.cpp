/*
ejemplo de cómo crear un formulario con botones y una interfaz gráfica básica en C++ utilizando la biblioteca SFML. También se incluye un ciclo while para que el programa no termine hasta que se cierre la ventana
*/
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Formulario");

    // Botones
    sf::RectangleShape button1(sf::Vector2f(100, 50));
    button1.setPosition(100, 100);
    button1.setFillColor(sf::Color::Green);

    sf::RectangleShape button2(sf::Vector2f(100, 50));
    button2.setPosition(300, 100);
    button2.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            // Comprueba si se hizo clic en el botón 1
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    sf::Vector2f mousePos = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
                    if (button1.getGlobalBounds().contains(mousePos))
                    {
                        // Acción al hacer clic en el botón 1
                        std::cout << "Boton 1 presionado" << std::endl;
                    }
                }
            }

            // Comprueba si se hizo clic en el botón 2
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    sf::Vector2f mousePos = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
                    if (button2.getGlobalBounds().contains(mousePos))
                    {
                        // Acción al hacer clic en el botón 2
                        std::cout << "Boton 2 presionado" << std::endl;
                    }
                }
            }
        }

        window.clear();
        window.draw(button1);
        window.draw(button2);
        window.display();
    }

    return 0;
}