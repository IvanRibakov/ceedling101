//
// Created by Ivan Ribakov on 2019-06-08.
//

#include "unity.h"
#include "my_time.h"
#include "mock_time.h"

void setUp(void) {}
void tearDown(void) {}

void test_getDayOfTheMonth_should_return_10(void)
{
    time_ExpectAndReturn(NULL, 1);
    struct tm mockTime = {
        0, 0, 0,
        10,
        0, 0, 0, 0, 0
    };
    localtime_IgnoreAndReturn(&mockTime);
    TEST_ASSERT_EQUAL_INT(10, getDayOfTheMonth());
}