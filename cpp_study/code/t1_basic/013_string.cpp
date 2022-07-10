#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main() {
    //1.c语言使用string
    char* chars = "hello chars";

    //cpp 中有了string的类
    //string类使用
    string s1;//""
    string s2 = "s2";
    string s3("s3");
    string s4 = s2;//将s2中的内容拷贝到s4中
    string s5(10,'a');//这种方式不推荐，会创建临时对象
    string s6{"s6"};
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;
    std::cout << s5 << std::endl;
    std::cout << s6 << std::endl;


    //对比基本数据类型
    std::cout << "-------- int 使用对比" << std::endl;
    int int1;
    int int2 = 10;
    int int3(22);
    int int4 = int2;
    int int5{5};
    std::cout << int1 << std::endl;
    std::cout << int2 << std::endl;
    std::cout << int3 << std::endl;
    std::cout << int4 << std::endl;
    std::cout << int5 << std::endl;

    //2. string函数使用
    std::cout << "---------string函数使用" << std::endl;
    string str1 = "hello str1";
    std::cout << str1.empty() << std::endl;
    std::cout << str1.size() << std::endl;
    std::cout << str1.length() << std::endl;
    string str2 = str1 + " haha";
    std::cout << str2 << std::endl;//字符串的连接使用
    std::cout << (str1 == str2) << std::endl;

    std::cout << *(str1.c_str()) << std::endl;//返回首地址
    //string str3 = "hello " + "str3"; 因为sting加的左结合性，这种写法编译器会直接报错
    
    
    //3.string的for循
    for (const auto &item : str1) {
        std::cout << item << std::endl;
        
    }
    std::cout << "----" << std::endl;

    for (auto iter = str1.begin() ; iter != str1.end(); ++iter) {
        std::cout << *iter ;
    }
    return 0;
}
