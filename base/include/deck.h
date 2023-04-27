/**
 * @file deck.h
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief 40 spanish card collection.
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

#include <array>
#include <card.h>

/** @class Deck
 * 40 spanish card collection.
 * 
 * Truco game has 40 cards from 50 deck spanish.
 * 8s, 9s and the joker are excluded.
 */
class Deck {
public:
	/**
	 * @brief Construct a new truco deck.
	 * sets all 40 card of truco game.
	 */
	Deck();

	/**
	 * @brief Get card from index.
	 */
	Card operator[](const unsigned index) const;

	/** @brief Merge the deck.
	 * 
	 */
	void merge();

private:
	std::array<Card, 40> cards;

	/**
	 * @brief Interchage two cards.
	 */
	void swap(unsigned i1, unsigned i2);
};
