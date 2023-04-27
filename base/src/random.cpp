/**
 * @file random.cpp
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief A random number generator implementation.
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <random.h>

#include <chrono>

std::default_random_engine Random::generator(std::chrono::system_clock::now().time_since_epoch().count());

/**
 * @brief Return a random integer number between min and max.
 * 
 * @param min Minimum value.
 * @param max Maximun value.
 * @return int a random value result.
 */
int Random::randInt(int min, int max) {
	std::uniform_int_distribution<int> dist(min, max);
	return dist(generator);
}

/**
 * @brief Return a random double number between min and max.
 * 
 * @param min Minimum value.
 * @param max Maximun value.
 * @return double a random value result.
 */
double Random::randDouble(double min, double max) {
	std::uniform_real_distribution<double> dist(min, max);
	return dist(generator);
}
