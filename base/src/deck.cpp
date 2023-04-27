/**
 * @file deck.cpp
 * @author Javier Candales (javier_candales@yahoo.com.ar)
 * @brief implementation of deck.h
 * @version 0.1
 * @date 2023-04-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <deck.h>

#include <random.h>

Deck::Deck() {

	cards[ 0].setValues( 0, 4, ORO, 0);
	cards[ 1].setValues( 1, 4, COPAS, 0);
	cards[ 2].setValues( 2, 4, ESPADAS, 0);
	cards[ 3].setValues( 3, 4, BASTOS, 0);

	cards[ 4].setValues( 4, 5, ORO, 1);
	cards[ 5].setValues( 5, 5, COPAS, 1);
	cards[ 6].setValues( 6, 5, ESPADAS, 1);
	cards[ 7].setValues( 7, 5, BASTOS, 1);

	cards[ 8].setValues( 8, 6, ORO, 2);
	cards[ 9].setValues( 9, 6, COPAS, 2);
	cards[10].setValues(10, 6, ESPADAS, 2);
	cards[11].setValues(11, 6, BASTOS, 2);

	cards[12].setValues(12, 7, COPAS, 3);
	cards[13].setValues(13, 7, BASTOS, 3);

	cards[14].setValues(14, 10, ORO, 4);
	cards[15].setValues(15, 10, COPAS, 4);
	cards[16].setValues(16, 10, ESPADAS, 4);
	cards[17].setValues(17, 10, BASTOS, 4);

	cards[18].setValues(18, 11, ORO, 5);
	cards[19].setValues(19, 11, COPAS, 5);
	cards[20].setValues(20, 11, ESPADAS, 5);
	cards[21].setValues(21, 11, BASTOS, 5);

	cards[22].setValues(22, 12, ORO, 6);
	cards[23].setValues(23, 12, COPAS, 6);
	cards[24].setValues(24, 12, ESPADAS, 6);
	cards[25].setValues(25, 12, BASTOS, 6);

	cards[26].setValues(26, 1, ORO, 7);
	cards[27].setValues(27, 1, COPAS, 7);

	cards[28].setValues(28, 2, ORO, 8);
	cards[29].setValues(29, 2, COPAS, 8);
	cards[30].setValues(30, 2, ESPADAS, 8);
	cards[31].setValues(31, 2, BASTOS, 8);

	cards[32].setValues(32, 3, ORO, 9);
	cards[33].setValues(33, 3, COPAS, 9);
	cards[34].setValues(34, 3, ESPADAS, 9);
	cards[35].setValues(35, 3, BASTOS, 9);

	cards[36].setValues(36, 7, ORO, 10);
	cards[37].setValues(37, 7, ESPADAS, 11);

	cards[38].setValues(38, 1, BASTOS, 12);
	cards[39].setValues(39, 1, ESPADAS, 13);
}

Card Deck::operator[](const unsigned index) const {
	return cards[index];
}

void Deck::swap(unsigned i1, unsigned i2) {
	Card card = cards[i1];
	cards[i1] = cards[i2];
	cards[i2] = card;
}

void Deck::merge() {
	for (unsigned i = 0; i < cards.size(); i ++) {
		unsigned r = Random::randInt(0, 39);
		this->swap(i, r);
	}
}
