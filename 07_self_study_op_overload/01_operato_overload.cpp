/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*
    This program shows why the operator overloading error occurs

*/


class Float16
{
private:
    unsigned short value; // Stores FP16 data

public:

    operator float() {return (float)value; }
    //Float16(unsigned short val = 0) : value(val) {} // Constructor
    Float16(int val = 0) : value(val) {} // Constructor

    unsigned short getValue() const { return value; }

    Float16 operator+(Float16 other) const
    {
        return Float16(value + other.value);
    }


};



int main()
{
    std::cout<<"Hello World\n";


    Float16 a(12345); // Create an object
    Float16 b = a;    // Default copy constructor is called
    std::cout << "b's value: " << b.getValue() << std::endl;


    Float16 b1(312345.0f); // Create an object
    std::cout << "b1's value: " << b1.getValue() << std::endl;


    Float16 t1 = 10;
    Float16 t2 = 25;
    Float16 t3;


    t3 =   t1 + 10;//error: ambiguous overload for ‘operator+’ (operand types are ‘Float16’ and ‘int’)

    std::cout << "t3's value: " << t3.getValue() << std::endl;

    t3 =   t1 + 10.0;// error: ambiguous overload for ‘operator+’ (operand types are ‘Float16’ and ‘double’)

    std::cout << "t3's value: " << t3.getValue() << std::endl;

    t3 =   10.0 + t1; // error: no match for ‘operator+’ (operand types are ‘double’ and ‘float16’)
    std::cout << "t3's value: " << t3.getValue() << std::endl;

    //t3 =   10 + t1; //error: no match for ‘operator+’ (operand types are ‘int’ and ‘float16’)
    //std::cout << "t3's value: " << t3.getvalue() << std::endl;

    t3 =   t1 + t2;
    std::cout << "t3's value: " << t3.getValue() << std::endl;


    return 0;
}
