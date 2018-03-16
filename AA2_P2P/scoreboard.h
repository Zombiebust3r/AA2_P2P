#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Network.hpp>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
struct Player {
	std::string name;
	int score;
	sf::TcpSocket* socket;
};
struct Direction
{
	std::string ip;
	int port;
};
class ScoreBoard {

	std::vector<Player> players;
public:
	ScoreBoard() {};
	~ScoreBoard() {};

	void PrintBoard(); //printea scoreboard
	void UpdatePlayer(Player player); //añade/actualiza jugador
};