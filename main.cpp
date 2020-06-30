// clang -O0 -emit-llvm filename.cpp -S -o filename.ll
#include "main.h"
#include <string>
#include <iostream>

int main() {
    Type a;
    std::cout << a.b << std::endl;
    return 0;
}