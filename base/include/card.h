/**
 * @file card.h
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief A simple card from the spanish deck
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

#include <string>

/** @enum CardType
 * Represents the card type ORO, COPAS, ESPADAS, BASTOS.
 */
typedef enum {
	ORO, COPAS, ESPADAS, BASTOS
} CardType;

/** @class Card
 * A simple card from the spanish deck.
 * 1s are "anchos".
 * 10s, 11s, 12s are considered "figures".
 */
class Card {
public:
	Card() = default;

	/** @brief Get the card id unique and unrepeatable.
	 * @return unsigned the card id.
	 */
	unsigned getId() { return id; }

	/**
	 * @brief Get the value of the card.
	 * values from 1-7, 10-12.
	 * 
	 * @return unsigned the value of the card.
	 */
	unsigned getValue() { return value; }

	/** @brief Get the card type.
	 * @return CardType the card type.
	 */
	CardType getType() { return type; }

	/**
	 * @brief Get the Weight of the card.
	 * The weight of the cards follow the table:
	 * 1 espadas    --> 13
	 * 1 bastos     --> 12
	 * 7 espadas    --> 11
	 * 7 oro        --> 10
	 * all 3s       --> 9
	 * all 2s       --> 8
	 * 1s remaining --> 7
	 * all 12s      --> 6
	 * all 11s      --> 5
	 * all 10s      --> 4
	 * 7s remaining --> 3
	 * all 6s       --> 2
	 * all 5s       --> 1
	 * all 4s       --> 0
	 * @return unsigned the weight of the card.
	 */
	unsigned getWeight() { return weight; }

	/**
	 * @brief Set card's complete data.
	 * 
	 * @param id id card.
	 * @param value value.
	 * @param type type.
	 * @param weight weight.
	 */
	void setValues(unsigned id, unsigned value, CardType type,
			unsigned weight);

	/**
	 * @brief Get the envido points of the card.
	 * consider "envido" as the values ​​of the cards from 1 to 7.
	 * "figures" the envido is 0.
	 * 
	 * @return unsigned the envido points.
	 */
	unsigned getEnvido();

	/**
	 * @brief Colloquial representation of the card.
	 * @return std::string string card complete name.
	 */
	std::string toString() const;

private:
	unsigned id{}, value{}, weight{};
	CardType type{};
};
