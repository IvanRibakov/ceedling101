//
// Created by Ivan Ribakov on 2019-05-19.
//

#include <time.h>

#include "my_time.h"

int getDayOfTheMonth() {
    time_t seconds;
    seconds = time(NULL);

    struct tm *time = localtime(seconds);
    return time.tm_mday;
}
