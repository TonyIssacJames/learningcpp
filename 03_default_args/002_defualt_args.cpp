#include <iostream>

using namespace std; //

void foo(int x) //default argument should be defined from right to left
{
    cout<<x <<endl;
}



void foo(int x, int y = 5) //default argument should be defined from right to left
{
    cout<<x <<","<<y<< endl;
    cout<<__func__<<"int"<< endl;
}


void foo(int x, double y = 6.0) //default argument should be defined from right to left
{
    cout<<x <<","<<y<< endl;
    cout<<__func__<<"double"<< endl;
}

main()
{
    
    foo(5, 4);
    foo(5, 5L);
    foo(5, 2.5);

}

