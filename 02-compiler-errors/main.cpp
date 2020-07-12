#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return "Joe";
}

/*
error: invalid conversion from 'const char*' to 'int' [-fpermissive]
    5 |     return "Joe";
      |            ^~~~~
      |            |
      |            const char*
make[3]: *** [CMakeFiles/02_compiler_errors.dir/main.cpp.o] Error 1
make[2]: *** [CMakeFiles/02_compiler_errors.dir/all] Error 2
make[1]: *** [CMakeFiles/02_compiler_errors.dir/rule] Error 2
make: *** [02_compiler_errors] Error 2
 */