#include <iostream>

using namespace std;

int main004() {
    //基本变量初始化
    int a = 10;
    int b{10};
    int c[]{1,2,3,4,5};

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    /*
    *   auto自动类型推断
    *	auto可以在变量声明的时根据变量的初始值类型自动为此变量选择匹配的类型，（声明的时候必须赋初值）
    *	auto自动类型推断发生在编译期间，所以使用auto避讳造成程序效率低。
    *	c++编译器内部的初始化器来实现
    */
    for (auto& x : c) {
        std::cout << x << std::endl;
    }

    return 0;
}

