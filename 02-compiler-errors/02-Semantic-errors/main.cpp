#include <iostream>

int main() {
    std::cout << ("Hello, World!" / 125) << std::endl;
    return 0;
}

/*
error: invalid operands of types 'const char [14]' and 'int' to binary 'operator/'
    4 |     std::cout << ("Hello, World!" / 125) << std::endl;
      |                   ~~~~~~~~~~~~~~~ ^ ~~~
      |                   |                 |
      |                   const char [14]   int
make[3]: *** [CMakeFiles/03_semantic_errors.dir/main.cpp.o] Error 1
make[2]: *** [CMakeFiles/03_semantic_errors.dir/all] Error 2
make[1]: *** [CMakeFiles/03_semantic_errors.dir/rule] Error 2
make: *** [03_semantic_errors] Error 2
*/