#include<cstdlib>
#include <iostream>
#include "Student.h"

using namespace std;
int main003(){

    std::cout << "hello world" << std::endl;

    uint32_t id;
    std::cin >> id ;
    std::cout << id << std::endl;


    //std 标准命名空间 standard adj标准的
    //cout = console out 是一个对象，标准输出对象，发送给这个对象的内容都会输出到屏幕上
    //ostream &std::cout.operator<< ()--它返回值写入了给定值的cout对象，返回值还是一个cout对象

    int x = 3;
    std::cout << x << "的平方是" << x*x << std::endl;
    //std::endl是一个模板函数。功能（1）输出换行（2）强制刷新输出缓冲区
    /*
     *输出缓冲区：是一段内存区域（逻辑地址空间--网卡缓存，显卡，输出都会在内存中占有一段内存空间）。
     *cout输出内容都是输出到输出缓冲区，
     *(a)当输出缓冲区满的时候
     *(b)执行return，
     *(c)强制换行的输出
     *(d)当系统不忙的时候，就会查看缓冲区的内容，发现新的内容就会输出到屏幕上的时候将缓冲区的内容输出
    */


    int i = 3;
    //warning: multiple unsequenced modifications to 'i' [-Wunsequenced]
    cout << i-- << endl << i-- << endl;
    //输出结果是 2  3.要避免在一行中多次改变一个变量的值。cout是右侧结合性


    //std::cin>>标准输入流,也是一个iostream相关对象，是标准输入--键盘
    //函数的原型是 isteam&  std::cin.operator>> ()
    std::cout << "请输入两个整数：" << endl;
    int value1 = 0;
    int value2 = 0;
    std::cin >> value1 >> value2;
    cout << "value1+value2=" << value1 + value2 << endl;



    return 0;
}