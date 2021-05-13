#include <NonBlockingGame.h>

using namespace bridges::game;

struct my_game : public NonBlockingGame {
	my_game(int assID, std::string username, std::string apikey)
		: NonBlockingGame (assID, username,  apikey) {
		// default grid is 10x10 - can change by adding size to the last 2 params in
		// constructor
	}
	// this runs exactly once
	virtual void initialize() override {
		// set eachcell to the background color
		// uset setBGColor(row, col, NamedColor::??)

		// draw some symbols on the screen
		// for instance,  HELLO

	}

	// game loop runs continuously
	virtual void gameLoop() override {
		//This function is executed each frame of the game
		// use the input key methods to make a message appear and disappear
		// for instance, keyUp(), keyDown(), etc
		// use the drawSymbol() method to put symbols in the board
		// Put up a message  "SIGCSE 2020 BRIDGES Workshop" or something interesting
	}
};

int main (int argc, char** argv) {
	// create the game object
	my_game g(134, "YOUR_USER_ID", "YOUR_API_KEY");


	// start the game
	g.start();
}
