#include <iostream>
#include <string>

using namespace std; //



constexpr int square_func(int a)
{
    return a*a;
}

//non type temlplate parameter

//bitset - it is used for manupalation fixed size series
//bit set size is specified at compile 
//bit set is a data type



main()
{
    
    constexpr int z_int =  square_func(6); //evaluted at variale compile runtime

    std::cout << "z_int: " << z_int <<std::endl;

}