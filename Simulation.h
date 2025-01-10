#pragma once

#include "Particle.h"

#include <vector>

class Simulation {
	
public:
	void update(std::vector<Particle>& particles);
		
private:
	const double gravity = 9.807; // m/s^2

};