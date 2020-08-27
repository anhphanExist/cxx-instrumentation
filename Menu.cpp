//
// Created by admin on 7/30/2020.
//

#include "Menu.h"

void Menu::init() {
    int function;
    cout << "Select a function" << endl;
    cout << "  1 - add" << endl;
    cout << "  2 - sub" << endl;
    cout << "  3 - mul" << endl;
    cout << "  4 - div" << endl;
    cout << "  5 - mod" << endl;
    cin >> function;
    Calculator* calculator = new Calculator();
    int a, b, res;
    switch (function) {
        case FUNCTION_ADD:
            a = input('a');
            b = input('b');
            res = calculator->add(a, b);
            cout << "    result = " << res << endl;
            break;
        case FUNCTION_SUB:
            a = input('a');
            b = input('b');
            res = calculator->sub(a, b);
            cout << "    result = " << res << endl;
            break;
        case FUNCTION_MUL:
            a = input('a');
            b = input('b');
            res = calculator->mul(a, b);
            cout << "    result = " << res << endl;
            break;
        case FUNCTION_DIV:
            a = input('a');
            b = input('b');
            res = calculator->div(a, b);
            cout << "    result = " << res << endl;
            break;
        case FUNCTION_MOD:
            a = input('a');
            b = input('b');
            res = calculator->mod(a, b);
            cout << "    result = " << res << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
    }
}

int Menu::input(char num) {
    int n;
    cout << "    " << num << " = ";
    cin >> n;
    cout << endl;
    return n;
}
