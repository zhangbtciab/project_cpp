#include <iostream>
#include "Student.h"

using namespace std;
/**
 * 命名空间解决同名类问题，相当于Java中的包
 */
namespace zhangsan{
    string name = "zhangsan";

}

namespace lisi{
    string name = "lisi";

}

int main002(){
    basic::Student student;
    student.name = (char * )"hello world";
    student.id = 10;
    std::cout << student.name << std::endl;

    std::cout << student.id << std::endl;


    std::cout << zhangsan::name << std::endl;
    std::cout << lisi::name << std::endl;

    return 0;
}
