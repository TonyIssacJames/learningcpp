#include <iostream>

using namespace std; //


//default argument cannot be redeclared
//signater is the declaration
void foo(int x, int y); //forward  declaration, it is recommended to have the forward declaration has the defualt argument


void foo(int x, int y = 5) //default argument should be defined from right to left
{
    cout<<x <<","<<y<< endl;
}

main()
{
    
    foo(5); //compiler substitues the missing value with default values
    foo('a'); //'a' 
    foo(true);
    foo(5.0); //double can be converted to int, but it matches with deleted func

    
    foo(4.0, 6);
    foo(4.0, 7.0f);

}

