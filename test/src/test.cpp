#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <deck_suite.h>

int main(int argc, char *argv[]) {

	CU_initialize_registry();

	if (!createDeckSuite()) return CU_get_error();

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	CU_cleanup_registry();

	return CU_get_error();
}
