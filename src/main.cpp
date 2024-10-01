#include <SFML/Graphics.hpp>

int main() {
    // Create a window with the title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window event
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a color
        window.clear(sf::Color::Red);
        
        // Display what has been rendered to the window
        window.display();
    }

    return 0;
}
