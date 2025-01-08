#include "raylib.h"

int main() {
	InitWindow(800, 600, "New Window");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText("Rocket Simulator v0.1", 400, 300, 25, WHITE);
		EndDrawing();
	}
}