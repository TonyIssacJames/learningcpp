#include <iostream>

using namespace std; //

#include <iostream>

int main()
{
    int x =5;
    int y =6;

    int& ref =x;

    ref = y;

    std::cout << x << '\n';

    return 0;
}