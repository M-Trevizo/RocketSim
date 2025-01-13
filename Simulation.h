#pragma once

#include "Particle.h"

#include <vector>

class Simulation {
public:
	Simulation();

	void update();
	void applyGravity(Particle& particle);
	void handleCollisions(Particle& particle);

	std::vector<Particle> getParticles() const { return particles; }
		
private:
	const double gravity = 9.807; // m/s^2
	std::vector<Particle> particles;
};