#include <iostream>
using namespace std;

int main001() {
    //字符型
    char ch  = 'a';
    char chs[10] = "a";
    //宽字符
    wchar_t wch = 'a';
    wchar_t wchs[10] = L"a";
    
//    std::cout << ch << std::endl;
//    std::cout << chs << std::endl;
//    
//    std::cout << wch << std::endl;
//    std::cout << wchs << std::endl;
//    std::cout << sizeof(wchar_t) << std::endl;

    //整型  其中取消符号性可以加unsigned
    short int s = 97;
    int m = 97;
    long int n = 97;

    unsigned short int us = 97;
    unsigned int um = 97;
    unsigned long int nl = 97;
    
    uint32_t ui32 = 17;
    uint64_t ui64;
    std::cout << ui64 << std::endl;
    

    //浮点型
    float f = 97.0f;
    double d = 97.0;
    long double k = 97.0;
    
    //布尔型
    bool b = true;
    
    return 0;
}
