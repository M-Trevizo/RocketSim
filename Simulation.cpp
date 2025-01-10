#include "Simulation.h"
#include "Particle.h"
#include "raylib.h"
#include "raymath.h"

void Simulation::update(std::vector<Particle>& particles) {
	for (Particle& particle : particles) {
		Vector2 vel = particle.getVelocity();
		vel.y += gravity * GetFrameTime();
		particle.setVelocity(vel);
		Vector2 pos = particle.getPosition();
		particle.setPosition(Vector2Add(vel, pos));
			
	}
}