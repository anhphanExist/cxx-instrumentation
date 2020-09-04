#include <iostream>
#include <dlfcn.h>
#include <cxxabi.h>
#include <cstdio>
#include "Menu.h"

static void __attribute__((no_instrument_function)) __cyg_profile_func_enter (void *this_fn, void *call_site)
{
    Dl_info info;
    dladdr(this_fn, &info);
//    char *outputBuffer = NULL;
//    char* realname = abi::__cxa_demangle(info.dli_sname, 0, 0, 0);
    printf("%p\t", this_fn);
    printf("Function Entry : %s %s\n", info.dli_fname, info.dli_sname);
}

static void __attribute__((no_instrument_function)) __cyg_profile_func_exit (void *this_fn, void *call_site)
{
    Dl_info info;
    dladdr(this_fn, &info);
//    char* outputBuffer = NULL;
//    char* realname = abi::__cxa_demangle(info.dli_sname, 0, 0, 0);
    printf("%p\t", this_fn);
    printf("Function Exit : %s %s\n", info.dli_fname, info.dli_sname);
}

int foo() {
    std::cout << "Inside foo" << std::endl;
    return 0;
}

int foo2(int param) {
    std::cout << "Inside foo 2" << std::endl;
    return 0;
}

int main() {
    Menu* menu = new Menu();
//    menu->init();
    int x = foo();
    foo2(x);
    return 0;
}
