#include <iostream>

using namespace std; //


// template <class T, class Y, class Z>
// Z max_func(T  a, Y b)
// {
//     return (a > b)? a : b;
// }

template<typename T>
T  max_func(T a, T b)
{
        std::cout << " template function: " <<std::endl;
    return (a > b)? a :b ;
}

// template<>
// int max<int>(int a, int b)
// {
//     return (a > b)? a :b ;
// }


// template<>
// double max<double>(double a, double b)
// {
//     return (a > b)? a :b ;
// }


int max_func(int a, int b)
{
    std::cout << "non template function: " <<std::endl;
    return (a > b)? a :b ;
}






/**

    1 - compiler clone the the function
    2 - in case argument types matches the tempalte types we don't have to specify
        the template type

    3 - Favour the normal function call when
        when we prefer template max_func<>(8, 6);


 */

main()
{
    
    int z_int, z1_int;
    double z_double;
    
    z_int = max_func<int>(5, 6); //instantiate a function template (cloning the function and putting the type)
    z1_int = max_func<int>(9, 6); //already instantiated, directly calls the instntation
    z_double = max_func<double>(5.0, 7.0); //instantiate the double variant

    z_int = max_func(5, 6); //actual type is not provided, it will try to deduce, from the argument types and instantiagtt
                       //if normal non-templated funciton is htere ,it will also be considered

    z_int = max_func<>(8, 6); //it will only consider max int template function

    std::cout << "z_int: " << z_int <<std::endl;
    std::cout << "z1_int: " << z1_int <<std::endl;
    std::cout << "z_double: " << z_double <<std::endl;
}