#include <iostream>

using namespace std; //


template<typename T>
T  max_func(T a, double b)
{
    std::cout << " template function: " <<std::endl;
    return (a > b)? a :b ;
}


main()
{
    
    int z_int, z1_int;
    double z_double;
    int z_float
    
    z_int = max_func(5, 6.0); //instantite int, double
    z1_int = max_func(9, 5.0f); //use int, double  with float will be promoted to double 

    z_double = max_func(5.0, 7.0); //instate double, double

    //z_int = max_func(5.0f, 6.0); //instantate float, doouble

    z_float = max_func(5.0f, 6.0f); //promtote 2nd param float double
                                // if float double is not there, it will generate float, double
                                // and convert 2nd parm to double


    std::cout << "z_int: " << z_int <<std::endl;
    std::cout << "z1_int: " << z1_int <<std::endl;
    std::cout << "z_double: " << z_double <<std::endl;
}