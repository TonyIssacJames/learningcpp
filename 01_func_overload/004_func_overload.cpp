#include <iostream>

using namespace std; //


void foo(char a, int b)
{
    cout << __func__<< " char, int"<<endl;
}

void foo(char a, float b)
{
    cout << __func__<< " char, float"<<endl;
}


void foo(char a, double b)
{
    cout << __func__<< " char, double"<<endl;
}

main()
{
    
    foo('a', 'x');
    // 
    
}