/**
 * @file card.cpp
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief implementation of card.h
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <card.h>

#include <sstream>

void Card::setValues(unsigned id, unsigned value, CardType type, unsigned weight) {
	this->id = id;
	this->value = value;
	this->type = type;
	this->weight = weight;
}

unsigned Card::getEnvido() {
	return value < 10 ? value : 0;
}

std::string Card::toString() const {
	std::stringstream ss;
	
	switch (value) {
	case 1:
		ss << "ancho";
		break;
	case 10:
		ss << "sota";
		break;
	case 11:
		ss << "caballo";
		break;
	case 12:
		ss << "rey";
		break;
	default:
		ss << value;
		break;
	}

	ss << " de ";

	switch (type) {
	case ORO:
		ss << "oro";
		break;
	case COPAS:
		ss << "copas";
		break;
	case ESPADAS:
		ss << "espadas";
		break;
	case BASTOS:
		ss << "bastos";
		break;
	}

	return ss.str();
}
