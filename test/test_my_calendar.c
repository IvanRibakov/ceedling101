//
// Created by Ivan Ribakov on 2019-06-08.
//

#include "unity.h"
#include "my_calendar.h"
#include "mock_my_time.h"
#include "mock_my_binding.h"

const MyBinding myBinding = {&daysToAdd};

void setUp(void) {}
void tearDown(void) {}

void test_isOdd_true(void) {
    getDayOfTheMonth_ExpectAndReturn(1);
    TEST_ASSERT_EQUAL_INT(1, isOddDay());
}

void test_isOdd_false(void) {
    getDayOfTheMonth_ExpectAndReturn(2);
    TEST_ASSERT_EQUAL_INT(0, isOddDay());
}

void test_calculateEndDate(void) {
    getDayOfTheMonth_ExpectAndReturn(13);
    daysToAdd_ExpectAndReturn(7);
    TEST_ASSERT_EQUAL_INT(20, calculateEndDay());
}