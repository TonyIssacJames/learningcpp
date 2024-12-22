#include <iostream>
#include <string>

using namespace std; //


template<typename T>
T  add_one(T a, int test = 1)
{
    std::cout << " template function: " <<std::endl;
    return  a + 1;
}

//sematically the templated funcion does not make sense
// template<>
// string  add_one(string a)
// {
//     std::cout << " template function: " <<std::endl;
//     return  a + 1;
// }


// template<>
// const char* add_one(const char*  a) = delete;

// template<>
// char* add_one(char*  a) = delete;

template<>
string add_one(string  a) = delete;

main()
{
    
    const string test_string {"Hello"};
    string z_string;
    int z_int, z1_int;
    double z_double;
    int z_float;
    

    z_int = add_one(2);
    z_double = add_one(2.3);
 
    z_string = add_one(test_string);

    std::cout << "z_int: " << z_int <<std::endl;
    std::cout << "z_double: " << z_double <<std::endl;
    std::cout << "z_string: " << z_string <<std::endl; //error: template-id ‘add_one<>’ for ‘std::string add_one(std::string)’ does not match any template declaration
                                                        //error: no match for ‘operator+’ (operand types are ‘std::__cxx11::basic_string<char>’ and ‘int’) 
}