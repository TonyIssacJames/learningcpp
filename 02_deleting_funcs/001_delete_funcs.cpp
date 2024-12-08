#include <iostream>

using namespace std; //


void foo(int x)
{
    cout<<x<<endl;
}

void foo(char) = delete; //to make 
                         //deleted function is considered as a candiate for function overload resolution 

main()
{
    
    foo(5);
    foo('a'); // 'a' 
    foo(true);
    foo(5.0); //double can be converted to int, but it matches with deleted func

 
    
}