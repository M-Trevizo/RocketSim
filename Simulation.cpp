#include "Simulation.h"
#include "Particle.h"
#include "raylib.h"
#include "raymath.h"

#include <vector>

Simulation::Simulation() {
	particles = Particle::createParticles(1, 5, 100);
}

void Simulation::update() {
	float deltaTime = GetFrameTime();
	
	for (Particle& particle : particles) {
		Vector2 vel = particle.getVelocity();
		vel.y += gravity * deltaTime;
		particle.setVelocity(vel);
		
		Vector2 pos = particle.getPosition();
		pos.y += vel.y * deltaTime;
		particle.setPosition(pos);
			
	}
}