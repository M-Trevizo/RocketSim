#pragma once

#include "Particle.h"

#include <vector>

class Graphics {
public:
	Graphics();

	~Graphics();

	int getWidth() const { return width; }
	int getHeight() const { return height; }

private:
	const char* title = "Rocket Simulator";
	const int width = 1366;
	const int height = 768;

	void start();
	void drawParticles(const std::vector<Particle>& particles);
};
