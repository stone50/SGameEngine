#include "SGameEngine.h"

int main() {
	SGame::onStart.handlers.push_back(GameStart);
	return 1;
}