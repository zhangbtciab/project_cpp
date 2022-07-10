#include <iostream>
#include <stdio.h>
//(1)内联函数--在函数定义(不是声明)前面加上inline，导致函数变成内联函数
// a.inline在影响编译器，在编译阶段对inline这种函数进行处理。
//		--系统尝试将调用函数的动作替换为函数本体，通过这种方式来提升性能。
// b.inline只是开发者对编译器的一个建议，请求。编译器可以做，可以不做，取决于编译器的诊断功能
// c.内联函数的定义就要放在头文件中，这样设计需要用到内联函数的实现都可以通过#include把

// 优缺点
//	（1）如果编译器替换成功，可以增加效率，但是会带来代码膨胀问题。所以建议函数体尽量小。
//	（2）注意：inline的实现具体优化由编译器优化的，可能把代码优化成一个常量。各种编译器对inline的处理各不相同。
//		要求内联函数尽量小，循环，分支，递归尽量不要出现在inline函数中，否则编译器可能因为代码复杂的原因拒绝让
//		这个函数成为一个内联函数。
//		constexpr函数可以看做一种更严格的内联函数。

inline int add(int a, int b);

inline int add(int a, int b) {
    return a + b;
}
constexpr int addt(int a) {
    return a + 3;
}
int main008(){
    std::cout << add(2,3) << std::endl;
    std::cout << addt(20) << std::endl;

    return 0;
}
