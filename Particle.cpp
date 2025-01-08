#include "Particle.h"

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