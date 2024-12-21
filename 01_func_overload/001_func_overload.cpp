#include <iostream>

using namespace std; //
/*
    
    referes to C++ std library, in that we have iostream
    container for identifier. 
    avoid naming collision

    ostream->cout
    istream-<
    iostream header -> part of c++ header

    std input, output
    scope: where a variable, function is accesseble
    overload 

    cout >> os stores in a buffer >> when the buffer is filled it is put on screen
    >> endl forces the buffer to flush out >> 

*/

int add_func(int a ,int b)
{
    cout << __func__<< " int"<<endl;
    return a + b;
}

double add_func(double a , double b)
{
    cout << __func__<< " double"<<endl;
    return a + b;
}

double add_func(int a , double b)
{
    cout << __func__<< " double "<<endl;
    return a + b;
}

double add_func(double a , int b)
{
    cout << __func__<< " double"<<endl;
    return a + b;
}

void print(int a)
{
    cout<<a <<endl;
    cout << __func__<< " int"<<endl;
}

void print(unsigned int a)
{
    cout<<a <<endl;
    cout << __func__<< " unsinged int"<<endl;
}


void print(float a)
{
    cout<<a <<endl;
    cout << __func__<< " float"<<endl;
}
void print(double a)
{
    cout<<a <<endl;
    cout << __func__<< " double"<<endl;
}

// /* uncomment this to fix the compilation error */
// void print(long int a)
// {
//     cout<<a <<endl;
//     cout << __func__<< " long int"<<endl;
// }

class HalfFloat
{

    unsigned short value;
public:
    // Constructor
    HalfFloat(uint16_t v) : value(v) {}

    // Conversion to float (simulate conversion from half-float to float)
    operator bool() const {
        // Replace this with your actual half-to-float conversion logic
        cout << __func__<<endl;
        return static_cast<bool>((value) / 10.0f);     
    }    

};

int main() {


    int val_int = add_func(1, 2);//overload resolution - matching function to a specific overlaod function
    int val_double = add_func(1.0, 5.0);
    HalfFloat h1 = 456;

    /*
        compiler go through a series steps
        at each step compiler applies a type conversion
        at each coversion compiler checks ()
    
    */
    print('a'); //
    long int val_long_int = 450000000000000000L;

    cout<< "size of long int: "<<sizeof(val_long_int)<<endl;
    print(val_long_int);  //  long cannot be promoted
                //  long can be converted to int or double
    print(5L);
    print(0);

    print(h1); //first userdefined type conversion, then the normal rules
}