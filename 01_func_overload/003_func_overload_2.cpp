#include <iostream>

using namespace std; //

void foo(int a)
{
    //cout << __func__<< " int"<<endl;
}

void foo(const int a)
{
    
}

void foo(const double a)
{
    
}

main()
{
    int x = 1;
    double y = 3.4;

    foo(x);
    /*  
        0 - look for exact match
        1 - first compiler will try trivial conversion
        const is a qulalifer
        non-const to const (trival conversion, qualification conversion)
        l value to r values coversion
        non -ref ref conversion
        trivial conversion is also an exact match

        2 - when there is no exact match compliler will go for nuemeric promotion
        3 - nuemeric conversion (lesser priority than numeric promotion)
            ex: int to double
        4 - if it cannot match even in numeric conversion, the look for user defined conversion
             int to double (conversion)
        5 - 

    */
    foo(y);

}