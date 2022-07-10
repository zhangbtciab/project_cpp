#include <iostream>
#include "Student.h"

using namespace t2_class;
using namespace std;
int main() {
    Student student("zhangsan", 12);
    std::cout << student.name << std::endl;
    std::cout << student.id << std::endl;


    student.SetId(15);
    student.SetName("lisi");
    std::cout << student.name << std::endl;
    std::cout << student.id << std::endl;


    return 0;
}



