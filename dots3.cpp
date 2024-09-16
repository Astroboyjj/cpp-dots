#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Main function of the program
int main()
{
  // create the window
  vector<int> size(2, 800);
  sf::RenderWindow window(sf::VideoMode(size[0], size[1]), "Dots!");
  window.setFramerateLimit(60);

  // run the program as long as the window is open
  while (window.isOpen())
  {
    // check all the window's events that were triggered since the last iteration of the loop
    sf::Event event;
    while (window.pollEvent(event))
    {
      // "close requested" event: we close the window
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Get input conditional block (hardcoded for now)
    int group_count = 3;
    int rule_count = 4;
    float rule_values[4] = {1,-1,0.4,-0.7};
    cout << rule_values[2];

    // Run the rule functions on seprate threads passing particle group copies and rule_value

    // clear the window with black color
    window.clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);
    //for ( auto group : all_particles) {
    //  for ( auto particle : group) {
    //    particle.update();
    //    window.draw(particle.rect);
    //  }
    //}

    // end the current frame
    window.display();
  }
  return 0;
}
