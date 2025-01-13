#include "Simulation.h"
#include "Particle.h"
#include "raylib.h"
#include "raymath.h"

#include <vector>

Simulation::Simulation() {
	particles = Particle::createParticles(1, 2, 1000);
}

void Simulation::update() {
	
	for (Particle& particle : particles) {
		applyGravity(particle);
		handleCollisions(particle);
	}

	
}

void Simulation::applyGravity(Particle& particle) {
	float deltaTime = GetFrameTime();
	
	Vector2 vel = particle.getVelocity();
	vel.y += gravity * deltaTime;
	particle.setVelocity(vel);

	Vector2 pos = particle.getPosition();
	pos.y += vel.y * deltaTime;
	particle.setPosition(pos);
}

void Simulation::handleCollisions(Particle& particle) {
	Vector2 center = particle.getPosition();
	float radius = particle.getRadius();

	// This just comes from where I draw the floor in Graphics.cpp
	Vector2 floorStart = { 0.0f, 718.0f };
	Vector2 floorEnd = { 1366.0f, 718.0f };
	if (CheckCollisionCircleLine(center, radius, floorStart, floorEnd)) {
		particle.setVelocity(Vector2Negate(particle.getVelocity()));
	}
}