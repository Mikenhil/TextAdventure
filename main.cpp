#include <iostream>
#include <string>

void gameLoop();

int main() {
	std::cout << "Game loaded." << std::endl;

	gameLoop();
}

void gameLoop() {
	bool running = true;
	while(running) {
		std::string response;

		std::cout << "What will you do?" << std::endl;
		std::cin >> response; 

		if (response == "north") {

		}
		else if (response == "south") {
	
		}
		else if(response == "west") {

		}
		else if(response == "east") {

		}
		else if(response == "exit" || response == "quit") {
			std::cout << "Thank you for playing." << std::endl;
			running = false;
		}
	}
}
