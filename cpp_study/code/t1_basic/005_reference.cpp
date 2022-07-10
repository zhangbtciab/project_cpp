#include <iostream>

using namespace std;
int main005() {

    int num = 10;
    int& inum = num;

    //int &reference = 10;	//	错误，必须初始化一个变量
    //float &reference = value;	//错误，引用类型必须相同

    inum = 11;
    std::cout << num << std::endl;

    return 0;
}