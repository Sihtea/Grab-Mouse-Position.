
#include "raylib.h"
#include <iostream>

int main() {

	int monitorheightpos;
	int monitorwidthpos;

// the section below ask for your montier width and height and sends it to start a widow with the input.
// it should open a window and grab a mouse position every click.

	std::cout << "Enter in your program width\n\n";
	std::cin >> monitorwidthpos;

	std::cout << "Enter in your program height\n\n";
	std::cin >> monitorheightpos;


	InitWindow(monitorwidthpos, monitorheightpos, "selecter");

	while (!WindowShouldClose()) {

		// the text below me is where it should grab and send to the console.

		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			Vector2 mousepos = GetMousePosition();

			std::cout << "Mouse X position   " << mousepos.x << "\n";
			std::cout << "Mouse Y position   " << mousepos.y << "\n\n";
		}
		if (IsKeyPressed(KEY_ESCAPE)) {
			CloseWindow();
		}

		BeginDrawing();

		ClearBackground(RAYWHITE);

		EndDrawing();
	}
	return -1;
}