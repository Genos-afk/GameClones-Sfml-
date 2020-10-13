#include <SFML/Graphics.hpp>

int main()
{
	// Create a video mode object
	sf::VideoMode vm(1920, 1080);

	// Create and open a window for the game
	sf::RenderWindow window(vm, "Timer", sf::Style::Fullscreen);

	// Create a texure to hold a graphic on the GPU
	sf::Texture textureBackground;

	// Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	// Create a sprite
	sf::Sprite spriteBackground;

	// Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	// Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);


	while (window.isOpen())
	{

#pragma region PlayerInput

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}

#pragma endregion


#pragma region UpdatingTheScene

#pragma endregion


#pragma region DrawingTheScene

		//Clear everything from the last frame
		window.clear();

		//Draw our game scene here
		window.draw(spriteBackground);

		//Show everything we just drew
		window.display();

#pragma endregion

	}

	return 0;
}