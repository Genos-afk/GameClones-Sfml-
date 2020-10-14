#include <SFML/Graphics.hpp>

int main()
{
	// Create a video mode object
	sf::VideoMode vm(1920, 1080);

	// Create and open a window for the game
	sf::RenderWindow window(vm, "Timber", sf::Style::Fullscreen);

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

	// Making a Tree Sprite
	sf::Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	sf::Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810, 0);

	//Bee Stuff
	sf::Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	sf::Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);

	// Bee's moving status
	bool beeActive = false;
	float beeSpeed = 0.0f;

	//Cloud stuff
	sf::Texture textureCloud;
	textureCloud.loadFromFile("graphics/cloud.png");

	sf::Sprite spriteCloud[3];

	for(sf::Sprite cloud : spriteCloud )
	{
		cloud.setTexture(textureCloud);
	}
	
	//Positioning the clouds on different positions

	spriteCloud[0].setPosition(0, 0);
	spriteCloud[1].setPosition(0, 250);
	spriteCloud[2].setPosition(0, 500);

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