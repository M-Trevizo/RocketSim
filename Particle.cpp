#include "Particle.h"

#include <vector>

Particle::Particle() {
	mass = 1;
	radius = 1;
	velocity = { 0.0f, 0.0f };
	position = { 0.0f, 0.0f };
}

Particle::Particle(double m, int r, Vector2 vel, Vector2 pos) {
	mass = m;
	radius = r;
	velocity = vel;
	position = pos;
}

std::vector<Particle> Particle::createParticles(double mass, int radius, int amount) {
	Vector2 vel = { 0.0f, 0.0f };
	Vector2 pos = { 100.0f, 100.0f };
	
	// Find the number of particles to place per row
	// Create vector to hold particles
	int perRow = static_cast<int>(floor(sqrt(amount)));
	std::vector<Particle> particles;
	
	// Create the number of particles
	// Positions should be in a grid shape
	for (int i = 1; i <= amount; i++) {
		Particle particle(mass, radius, vel, pos); 
		particles.push_back(particle);
		pos.x += 2 * radius;
		if (i % perRow == 0) {
			pos.x = 100.0f;
			pos.y += 2 * radius;
		}
	}

	return particles;
}