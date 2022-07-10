#include <iostream>
#include <vector>

// (1)标准库概念
//	1.c++标准库 standard library c++编译器自带，可以在代码中包含头文件直接使用。
//  	引入的目的就是解决一些反复使用的功能，直接使用即可。
//	2.c++标准模板库，STL=standard template library。包含在c++标准库中，是c++标准库的核心。
//		STL深刻影响着c++标准库
//	3.泛型编程 generic programming 使用模板template为主要的编程手段来编写代码。
//		可以认为标准模板库就是使用泛型编程的编码方式为我们提供的一套库。

// (2)STL标准模板库 发展史和各个版本
//	1998年，STL被融入到C++标准中来
//	很多厂商去实现很多stl版本：
//			1.HP（惠普） stl，是所有实现坂本的始祖
//			2.SGI stl：参考惠普stl实现的，linux下的GUN（gcc,g++）用的就是这个版本
//			3.P.J.Plauger STL:也是惠普STL实现的	VC++

// (3)STL的组成部分
//		1.容器：vector list map
//		2.迭代器:用于遍历或者访问容器中的元素
//		3.算法，查找search ,排序sort，
//		4.分配器--一般不使用，进行内存分配，一般不需要明确指定，使用默认分配即可。
//		5.其他：如适配器，仿函数(函数对象等)

using namespace std;
int main001(){
    //vector<int&> v1; 引用类型不能存放在迭代器中

    //1.构造一个空迭代器
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(12);
    for (const auto &item : v1) {
        std::cout << item << std::endl;

    }

    //进行元素拷贝的初始化，通过拷贝复制
    vector<int> v2 = v1;

    //2.迭代器初始化
    vector<string> v3_str = {
            "hello",
            "haha",
            "hehe"
    };

    vector<int>Number1(15, 0);	//	包含15个元素，每个元素的值是0
    vector<string>Mystr05(12, "AAAAA");
    //如果不给初值，那么系统会设置初值
    vector<int>Nubmer2(20);	//0
    vector<string>myStr06(12);	//=""

    //5.其他初始化方式()表示元素数量   {}元素内容  --但是不是绝对的
    vector<int>Nubmer03(10);	//集合中有10个元素，每个元素的值由系统给定。
    vector<int>Number04{ 10 };	//集合中有一个元素10.
    vector<string>myStr07{ "hello" };		//一个元素，是hello字符串
    vector<string>myStr08{ 10 };	//这里的10是int类型，与字符串类型不匹配，系统自动解释为10个元素，每个元素为空''
    vector<string>myStr09{ 10,"AAAA" };	//10个元素，每个元素都是AAAA

    vector<int>Number05(10, 1);	//	10个元素，每个元素值为1
    vector<int>Number06{ 10, 1 };	//	2个元素，10,1等同于初始化列表


    return 0;
}