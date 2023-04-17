#include "GameState.h"




GameState::GameState()
{

}







const std::string GameState::map[H] =
{
	"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B                                                                             BB",
	"B             000 BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
	"B       BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB",
	"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"
};


GameState::GameState(sf::RenderWindow* window)
	: State(window)
{
	//ancho del mapa	


}

GameState::~GameState()
{
}

void GameState::endState()
{
}

void GameState::update(const float& dt)
{
	//std::cout << "Ahora estamos en GameState" << "\n";

	//this->ent.update(dt);
}

void GameState::render(sf::RenderWindow* window)
{
	//this->ent.render(this->window);
	//play.drawPlayer("playerTex3.png", play.e_sprite, play.e_texture, *window);
	
	for (i = 0; i < H; i++) //for loop de la altura del mapa
	{
		for (j = 0; j < W; j++) //for loop de la anchura del mapa
		{

			if (map[i][j] == 'B')
			{
				/*std::cout << "es B" << std::endl;*/

				sf::Texture grass_texture; //textura
				sf::Sprite grass_sprite; //sprite
				grass_texture.loadFromFile("grassTex.png"); //se carga el archivo
				grass_sprite.setTexture(grass_texture); //se convierte el archivo a sprite
				grass_sprite.setPosition(j * 16, i * 16);
				window->draw(grass_sprite);
			}
			if (map[i][j] == '0')
			{
				sf::Texture coin_texture; //textura
				sf::Sprite coin_sprite; //sprite
				coin_texture.loadFromFile("coinTex.png"); //se carga el archivo
				coin_sprite.setTexture(coin_texture); //se convierte el archivo a sprite
				coin_sprite.setPosition(j * 16, i * 16);
				window->draw(coin_sprite);
			}
			if (map[i][j] == ' ')
			{
				/*std::cout << "es 2" << std::endl;*/
				continue;
			}
		}
	}
}
