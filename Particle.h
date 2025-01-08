#pragma once

#include "raylib.h"

class Particle {
public:
	Particle();
	Particle(double m, int r, Vector2 vel, Vector2 pos);

private:
	double mass;
	int radius;
	Vector2 velocity;
	Vector2 position;

};