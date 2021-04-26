#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "linked_list.h"

void test_init_list (void **state) {
    (void) state; // unused
    List *l = malloc(sizeof(List));
    list_init(l, NULL);
    assert_int_equal(l->size, 0);
}

int setup (void **state)
{
    return 0;
}

int teardown (void **state)
{
    return 0;
}


int main (void)
{
	const struct CMUnitTest tests [] =
	{
        cmocka_unit_test (test_init_list),
	};

	int count_fail_tests =
        cmocka_run_group_tests(tests, setup, teardown);


	return count_fail_tests;
}
