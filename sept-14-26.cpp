#include <iostream>

void foo(int a, int b);
void bar(int& a, int& b);

int main ()
{
    int cat, dog;
    std::cout<<"Hello World!";

    cat = 1;
    dog = 2;
    std::cout<< cat <<'\n';
    std:: cout << dog; 

    return 0;
}

void food (int a, int& b)
{
    a = 5;
    b = 10;
}