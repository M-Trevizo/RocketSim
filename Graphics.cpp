#include "raylib.h"
#include "Graphics.h"
#include "Particle.h"
#include "Simulation.h"

#include <vector>

Graphics::Graphics() {
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	InitWindow(width, height, title);
	SetTargetFPS(500);
	start();
}

Graphics::~Graphics() {
	CloseWindow();
}

void Graphics::start() {
	// Init simulation
	Simulation simulation;
	
	// Init frame counter
	int frameCounter = 0;
	
	// Main game loop
	while (!WindowShouldClose()) {
		simulation.update();
		BeginDrawing();
			ClearBackground(BLACK);
			DrawText("Rocket Simulator v0.1", 10, 10, 25, WHITE);
			DrawFPS(10, 45);
			DrawLine(0, getHeight() - 50, getWidth(), getHeight() - 50, WHITE);
			drawParticles(simulation.getParticles());
		EndDrawing();
	}
}

void Graphics::drawParticles(const std::vector<Particle>& particles) {
	for (const Particle& particle : particles) {
		Vector2 pos = particle.getPosition();
		DrawCircle(pos.x, pos.y, particle.getRadius(), WHITE);
	}
}