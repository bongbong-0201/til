#include <iostream>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);

    char name[100];
    char number[100];

    std::cin>>name>>number;

    std::cout<<name<<" "<<number;
    return 0;
}