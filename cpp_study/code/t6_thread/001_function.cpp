#include <thread>
#include <iostream>

//是用方法创建线程
void SayHi(int times ) {
    while(times) {
        std::cout << " ------ thread " << times << std::endl;
        times--;
    }
}
using namespace std;
int main001() {

    thread cuthread(SayHi,15);
    //std::cout << cuthread.joinable() << std::endl;

    //1.线程阻塞
    //cuthread.join();
    cuthread.detach();
    int times = 10;
    while(times) {
        std::cout << "-- main " << times << std::endl;
        times--;
    }

    return 0;
}

//1.整个进程是否执行完毕标志是主线程是否执行完毕，如果主线程执行完毕，则整个进程执行完毕
//2.如果主线程执行完毕，子线程尚未执行完毕，子线程也会被操作系统强行终止
//3.detache()Detaches the associated thread from the thread object.
//	 The operating system becomes responsible for releasing thread resources on termination.
//	 传统的多线程程序子线程要等待子线程执行完毕，然后自己退出，使用detach可以让主线程和子线程分离分离执行。
//	 detach()会导致线程失去我们自己的控制。一旦调用detach()线程就被操作系统接管，就不能再使用join()，否则会有异常

//5.使用detach的目的就是为了让主线程等待所有子线程都执行完毕