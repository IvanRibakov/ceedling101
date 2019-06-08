//
// Created by Ivan Ribakov on 2019-06-08.
//

#include "my_binding.h"

inline int daysToAdd();
const MyBinding myBinding = {&daysToAdd};

inline int daysToAdd() {
    return 5;
}
