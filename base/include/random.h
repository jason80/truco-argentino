/**
 * @file random.h
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief A random number generator class.
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

#include <random>

/** @class Random
 * A random generator class.
 */
class Random {
public:
	/**
	 * @brief Return a random integer number between min and max.
	 * 
	 * @param min Minimum value.
	 * @param max Maximun value.
	 * @return int a random value result.
	 */
	static int randInt(int min, int max);

	/**
	 * @brief Return a random double number between min and max.
	 * 
	 * @param min Minimum value.
	 * @param max Maximun value.
	 * @return double a random value result.
	 */
	static double randDouble(double min, double max);

private:
	static std::default_random_engine generator;
};
