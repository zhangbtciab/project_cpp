#include <iostream>

int add(int , int);//函数声明

int add(int a, int b) {
    return a+b;
}

auto sub(int , int) -> int;//函数后置返回类型
auto sub(int a, int b) -> int {
    return a-b;
}

int main012(){
    std::cout << add(1, 11) << std::endl;
    std::cout << sub(11,1) << std::endl;


    return 0;
}


