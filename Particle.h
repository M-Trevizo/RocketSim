#pragma once

#include "raylib.h"

#include <vector>

class Particle {
public:
	Particle();
	Particle(double m, int r, Vector2 vel, Vector2 pos);

	int getRadius() const { return radius; }
	double getMass() const { return mass; }
	Vector2 getVelocity() const { return velocity; }
	Vector2 getPosition() const { return position; }

	void setVelocity(Vector2 newVelocity); // TODO reminder to set velocity limit
	void setPosition(Vector2 newPosition); 

	static std::vector<Particle> createParticles(double mass, int radius, int amount);

private:
	double mass;
	int radius;
	Vector2 velocity;
	Vector2 position;

};