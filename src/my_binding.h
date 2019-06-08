//
// Created by Ivan Ribakov on 2019-06-08.
//

#ifndef GOAL_CEEDLING_MY_BINDING_H
#define GOAL_CEEDLING_MY_BINDING_H

typedef struct {
    int (*daysToAdd)();
} MyBinding;

extern const MyBinding myBinding;

#ifdef TEST
int daysToAdd();
#endif

#endif //GOAL_CEEDLING_MY_BINDING_H
