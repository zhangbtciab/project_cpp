#include <iostream>
using namespace std;

int main009() {
    std::cout << "for循环使用" << std::endl;

    int array[]{2,3,4,5,6,7,7};
    for(auto& x : array) {
        std::cout << x << std::endl;
    }

    std::cout << "-------------" << std::endl;
    
    for (const auto &item : {3,4,2,5,6}) {
        std::cout << item << std::endl;
        
    }

    return 0;
}

