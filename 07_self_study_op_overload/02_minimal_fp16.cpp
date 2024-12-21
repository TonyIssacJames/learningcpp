/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>


class FP16 {
private:
    uint16_t data;
    float to_float() const { return static_cast<float>(data); }
    FP16  to_FP16()  const { return data; }
public:
    FP16() {}
    FP16(float value) : data(value) {}
    operator float()
    {
        return to_float();
    }

    // Custom isnan and isinf in the same namespace
    //friend bool isnan(const FP16& value) {
    //    return std::isnan(value.to_float());
    //}

    //friend bool isinf(const FP16& value) {
    //    return std::isinf(value.to_float());
    //}

};

// Specializing std::is_floating_point for FP16
//namespace std {
//    template <>
//    struct is_floating_point<FP16> : std::true_type {};
//}




int main()
{
    std::cout<<"Hello World\n";


    FP16 test1 = 10.5;
    FP16 test2 = 20.1f;
    FP16 test3;
    FP16 test4 = 3000.9f;


    test3 =  23456 + test1;

    std::cout<<"test3: " << test3 <<std::endl;;


    test3 =  test1 + 23456L;

    std::cout<<"test3: " << test3 <<std::endl;



    test3 =  test1 + 66000L;

    std::cout<<"test3: " << test3 <<std::endl;

    test3 =  66000L - test4;

    std::cout<<"test3: " << test3 <<std::endl;

    if(std::isnan(5.0f))
    {
        std::cout<<"It is a NaN\n";
    }


    if(std::isnan(test1))
    {
        std::cout<<"It is a NaN\n";
    }


    auto test5 = test1 + test2;
    std::cout<<"size of test5: " << sizeof(test5) <<std::endl;


    test3 = test1 + test2;
    std::cout<<"size of test3: " << sizeof(test3) <<std::endl;


    return 0;
}
