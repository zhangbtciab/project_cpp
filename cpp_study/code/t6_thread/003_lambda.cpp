#include <iostream>
#include <thread>
//使用lambda表达式创建线程

using namespace std;
int main() {
    auto lambdathread = []{
        std::cout << "子线程开始" << std::endl;
        while(true) {
            std::cout << "--" << std::endl;
        }
        std::cout << "子线程结束" << std::endl;
    };
    thread mythread(lambdathread);
    mythread.detach();
    //mythread.join();
    std::cout << "主线程执行" << std::endl;


    return 0;
}
