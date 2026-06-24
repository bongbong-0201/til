#include <iostream>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    int num;
    int n;
    std::cin >> n;
    for (int i = 0; i < 9; i++) {
        std::cout<<n<<"*"<<i+1<<"="<<n*(i+1)<<std::endl;
    }
    return 0;
}