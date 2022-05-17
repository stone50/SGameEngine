#include "SGameEngine.h"
#include <iostream>

struct Colr {
	unsigned int red;
	unsigned int green;
	unsigned int blue;
	double alpha;
};

int main() {
	unsigned int width = 1600;
	unsigned int height = 900;
	{
		std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
		std::vector<std::vector<Colr>> colrs(width, std::vector<Colr>(height));
		std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
		double duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
		std::cout << "Colrs loaded in " << duration << " nanoseconds\n";
		std::cout << "Average Colr load time: " << duration / (width * height) << " nanoseconds per Colr\n\n";
	}

	{
		std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
		std::vector<std::vector<SColor>> scolors(width, std::vector<SColor>(height));
		std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
		double duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
		std::cout << "SColors loaded in " << duration << " nanoseconds\n";
		std::cout << "Average SColor load time: " << duration / (width * height) << " nanoseconds per SColor\n\n";
	}

	{
		std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
		std::vector<std::vector<char>> chars(width, std::vector<char>(height));
		std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
		double duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
		std::cout << "Chars loaded in " << duration << " nanoseconds\n";
		std::cout << "Average char load time: " << duration / (width * height) << " nanoseconds per char\n\n";
	}

	{
		std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();
		std::vector<std::vector<bool>> bools(width, std::vector<bool>(height));
		std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
		double duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
		std::cout << "Bools loaded in " << duration << " nanoseconds\n";
		std::cout << "Average bool load time: " << duration / (width * height) << " nanoseconds per bool\n\n";
	}

	SGame::onStart.handlers.push_back(GameStart);
	return 1;
}