#include <iostream>
#include <cstdlib>
using namespace std;

//new和delete分配和释放内存
//(a)是运算符（标识符），c++中使用new、delete分配和释放内存，不再使用c中的malloc free分配和释放内存。
//(b)new和delete也是分配和释放内存，但是使用new和delete会调用类的构造函数和析构函数
//  new的三种方式
// (1)指针变量名字=new 类型标识符
// (2)指针变量名字=new 类型标识符（指针初始值）  --注意这里是（）
// (3)指针变量名字=new 类型标识符[内存单元的个数]---[]表示是数组
// ()初始化，[]数组
int main() {
    std::cout << " " << std::endl;
    int* intp = new int(10);
    if (intp != nullptr) {
        std::cout << intp << std::endl;
        std::cout << *intp << std::endl;
        delete intp;
        intp = nullptr;
    }

    std::cout << " " << std::endl;
    string* strs = new string("hahaha");
    if (strs != nullptr) {
        std::cout << strs << std::endl;
        std::cout << *strs << std::endl;
        delete strs;
        strs = nullptr;
    }

    std::cout << " " << std::endl;
    int* intp2 = new int;
    if (intp2 != nullptr) {
        std::cout << *intp2 << std::endl;
        *intp2 = 101;
        std::cout << *intp2 << std::endl;
        delete intp2;
        intp2 = nullptr;
    }

    return 0;
}

