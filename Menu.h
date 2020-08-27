//
// Created by admin on 7/30/2020.
//

#ifndef UNTITLED_MENU_H
#define UNTITLED_MENU_H

#define FUNCTION_ADD 1
#define FUNCTION_SUB 2
#define FUNCTION_MUL 3
#define FUNCTION_DIV 4
#define FUNCTION_MOD 5

#include <iostream>
#include "Calculator.h"

using namespace std;

class Menu {
public:
    void init();
private:
    int input(char num);
};


#endif //UNTITLED_MENU_H
