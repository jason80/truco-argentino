#include <deck_suite.h>

#include <deck.h>

int initDeckSuite() {
	return 0;
}

int cleanDeckSuite() {
	return 0;
}

void testCards() {
	Deck deck;

	CU_ASSERT_STRING_EQUAL(deck[0].toString().c_str(), "4 de oro");
	CU_ASSERT_STRING_EQUAL(deck[1].toString().c_str(), "4 de copas");
	CU_ASSERT_STRING_EQUAL(deck[2].toString().c_str(), "4 de espadas");
	CU_ASSERT_STRING_EQUAL(deck[3].toString().c_str(), "4 de bastos");

	CU_ASSERT_STRING_EQUAL(deck[17].toString().c_str(), "sota de bastos");
	CU_ASSERT_STRING_EQUAL(deck[39].toString().c_str(), "ancho de espadas");
}

void testEnvido() {
	Deck deck;

	CU_ASSERT_EQUAL(deck[4].getEnvido(), 5);
	CU_ASSERT_EQUAL(deck[20].getEnvido(), 0);
}

bool createDeckSuite() {
	CU_pSuite suite = CU_add_suite("deck", initDeckSuite, cleanDeckSuite);
	if (!suite) {
		CU_cleanup_registry();
		return false;
	}

	if (!CU_add_test(suite, "cards", testCards) ||
		!CU_add_test(suite, "envido", testEnvido)
	) {
		CU_cleanup_registry();
		return false;
	}

	return true;
}
