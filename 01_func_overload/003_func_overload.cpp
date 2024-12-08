#include <iostream>

using namespace std; //


void foo(unsigned int)
{

}
void foo(float )
{
    
}

main()
{
    foo(3.14); //3.14 numeric converted to float and unsinged int which can cause ambiguity

    //how to resolve
    // 1 - define a new function
    // 2 - explicity type cast to the function you want to call
}