#include <iostream>
using namespace std;

constexpr int GetNum(){
    int a = 15;
    a = 1;
    return a;
}

// 1 常量就是不变的量,const关键字表示不变的意思
// 2 constexpr关键字,c++11才引入的关键字，也是一个常量的概念，在编译的时候求职，能提升性能
int main007() {
    //constexpr 变量使用
    std::cout << "--------------变量使用" << std::endl;
    constexpr int var = 100;
    int& var_temp = (int&) var;
    var_temp = 101;
    //可以看到，两个变量的地址相同，但是没有像const一样值被修改
    std::cout << var << std::endl;
    std::cout << var_temp << std::endl;
    std::cout << &var << std::endl;
    std::cout << &var_temp << std::endl;

    //constexpr 函数使用
    std::cout << "--------------函数使用" << std::endl;
    int num = GetNum();
    std::cout << num << std::endl;

    return 0;
}