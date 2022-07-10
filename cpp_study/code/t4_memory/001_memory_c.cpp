#include <iostream>
#include <cstdlib>
using namespace std;

int main001() {
    //c语言内存分配 -- 普通类型
    std::cout << "--- c语言内存分配" << std::endl;
    int *p = NULL;
    p = (int*) malloc(sizeof(int));
    if (p != NULL) {
        //p不为空，表示内存分配成功
        *p = 19;
        std::cout << *p << std::endl;
        //堆中分配内存并成功释放内存
        free(p);
        p = NULL;
    }

    //c语言内存分配 --
    std::cout << "---cpp内存分配 char" << std::endl;
    char* charp = NULL;
    charp = (char*)malloc(sizeof(char) * 100);
    if (charp != NULL) {
        //这种复制错误
        //charp = "hello chars";
        strncpy(charp, "hello charts", 100);
        std::cout << charp << std::endl;
        free(charp);
        charp = NULL;
    }

    std::cout << "---cpp内存分配 int[]" << std::endl;
    int* ints = NULL;
    ints = (int*)malloc(sizeof(int) * 100);
    if (ints != NULL) {
        int* temp = ints;
        *temp++ = 1;
        *temp++ = 2;
        std::cout << ints[0] << std::endl;
        std::cout << ints[1] << std::endl;
        free(ints);
        ints = NULL;


        std::cout << charp << std::endl;
        free(charp);
        charp = NULL;
    }
}