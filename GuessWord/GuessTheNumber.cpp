#include "GuessTheNumber.hpp"
#include <random>
#include <iostream>


GuessTheNumber::GuessTheNumber()
{

	std::random_device r;
	std::default_random_engine e(r());
	std::uniform_int_distribution<int> dist(1,10);

	_secretNumber = dist(e);

	_guessCount++;
	std::cout << "Enter your guess: " << std::endl;
	std::cin >> _guess;

}

GuessTheNumber::~GuessTheNumber()
{
}

void GuessTheNumber::playGame()
{

	while (_secretNumber != _guess)
	{
		if (_secretNumber - _guess <= 3 || _guess - _secretNumber <= 3)
		{
			std::cout << "Your guess is close, but ";
		}
		if (_guess < _secretNumber)
		{
			std::cout << " your number is too low. Try again with bigger number." << std::endl;
		}
		else
		{
			std::cout << " your number is too high. Try again with smaller number." << std::endl;
		}

	
		_guessCount++;
		std::cin >> _guess;

	}
	std::cout << "CONGRATULATIONS! You win!" << std::endl;
	std::cout << "It took you " << _guessCount << " guesses." << std::endl;

}
