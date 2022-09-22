#pragma once

class GuessTheNumber
{
private:
	int _secretNumber = 0;
	int _guess = 0;
	int _guessCount = 0;
public:
	GuessTheNumber();
	~GuessTheNumber();
	void playGame();
};
