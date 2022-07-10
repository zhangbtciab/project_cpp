#include <iostream>

int main011(){
    std::cout << typeid(NULL).name() << std::endl;
    std::cout << typeid(nullptr).name() << std::endl;

    //实际上null 和 nullptr是不同的类型

    return 0;
}
