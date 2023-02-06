//
// Created by JGreenwell on 2/4/2023.
// Was a simple hello world - now adding SFML (static 2.5.1 version) under zLib License
// Still just opens a "Hello World" window
//
// SFML: Will be used for graphics and audio (due to cross-platform nature of library)
// Reference: https://github.com/SFML/SFML/blob/master/license.md
// Project itself is under MIT license.
// For students just starting with git/GitHub and trying to add SFML to a Cmake project.
//

#include "SFML/Window/Window.hpp"
#include "SFML/Window/Event.hpp"

// VORBIS causes a warning when loading CMake - there is an issue open due to this
// We don't use this audio codex (or at least I don't) so will remove warning later

int main() {
    sf::Window window(sf::VideoMode(900, 500), "Hello World");

    // set window to open as long as events (only one this time) is still happening
    while (window.isOpen())
    {
        // Set up an event for our event loop - blank window but still a loop until closed
        sf::Event event{};
        while (window.pollEvent(event))
        {
            // "close requested" event: someone hit the X to close window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
    return 0;
}
