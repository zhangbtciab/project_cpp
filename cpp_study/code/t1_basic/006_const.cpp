#include <iostream>

//（1）const修饰变量
//（2）const修饰指针
//（3）const修饰形参
using namespace std;
int test(const int& a) {
    //修改变量a的值，编译器会报错，
    //使用const可以起到保护形参不会被修改的作用
    //a = 100;
    return a;
}

int main006() {

    //1.变量
    const int var = 7;
    //var = 8;编译错误
    
    //实际上可以通过这种方式改变
    int& var_change = (int&) var;
    var_change = 10;
    std::cout << var_change << std::endl;

    std::cout << &var << std::endl;
    std::cout << &var_change << std::endl;

    //3.形参
    test(15);

    //2.指针
    //离变量近代表该变量是不可变类型，
    //离变量远代表指针指向的内容不可变
    int b = 19;
    int c = 20;
    const int* a = &b;
    a = &c;
    //*a = 12; error

    string s1 = "hello s1";
    string s2 = "hello s2";
    string* const s3 = &s1;
    *s3 = "hello s3";
    //s3 = &s2; error

    return 0;
    
}

