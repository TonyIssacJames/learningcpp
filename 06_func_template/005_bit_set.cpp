#include <iostream>
#include <string>
#include <bitset>

using namespace std; //





//non type temlplate parameter

//bitset - it is used for manupalation fixed size series
//bit set size is specified at compile 
//bit set is a data type

//typicall T is for type
//N is for non type int parameter

template <int N> //non type parameter, N will act a place holder for the variable
int test_func(void)
{
    cout <<"print "<< N <<endl;
}

main()
{

    bitset<8> test1 = 0b00000111;   //8 is none type template parameter   

    cout <<"size of bit set"<<sizeof(test1)<<endl;

    test_func<10>();

}

//refs and pointers (1 week)
//enums and structs (1 week)
//classes  (2 weeks)
//advanced ()
//vector   ()
//arrays, fixed size arrays
//iterators
//dynamic allocation (func pointer, and lambdas)
//operator overloading
//smart pointers
//object relationships
//inheritance
//virtual functions
//template classes
//exceptions
//input and output