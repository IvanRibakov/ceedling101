//
// Created by Ivan Ribakov on 2019-06-08.
//

#include "my_time.h"
#include "my_binding.h"

#include "my_calendar.h"

bool isOddDay() {
    int dayOfMonth = getDayOfTheMonth();
    return ((dayOfMonth % 2) == 1);
}

int calculateEndDay() {
    int dayOfMonth = getDayOfTheMonth();
    int daysToAdd = myBinding.daysToAdd();
    return dayOfMonth + daysToAdd;
}