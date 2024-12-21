#include <iostream>


using namespace std; //

/* 

    compound types

    array, pointer to funcion, obj

    function

    l value, r value
    ================
    l value 
    expressions  => a combination of literals and values to executed to produce a single value
    how c++ evaluate expression
    two properties
    1 - type of expression = type of the value, object, function          
    12/4 = int
    2 - value

    compiler can use the type of the expression to check the expression is valid in
    a given context

    type of the expression should be determinable at compile time
    value of the expression may be determined at compile time

    two possible value categories
    l value expression that evalues to a object or function

    int x = 5;
    int y = x; //expression x evalueed to x (which is x)
               //

    modifiable and non-modifieable l values

    int x = 5;
    const double t = 1.2; //non modfieable expression

    const double y = t; //t is an expression, t is evalued to t (itself), object so l value
                        // non modifiable l value

    identifier = should have and address,  can be identified though a ref, ponter, identifeir


    r value always evaluate to a value.
    r value = literals  (2, 3, 3.0, "Hello"), return value of functions
              operators that return by value

              r values not identfieable
              it cannot store anyting need to be used immediately 
              exits only with in the scope of the expression
              casting a value is also 


    int x = 5; //5 is  r value
    const double t = 1.2; //1.2 is r value

    int y = x; //modfieable l value, x is 
    const doube e = t; //t non-modfieable l value

    int func(int a)
    {
        return 5;
    }


    int z = func(10);

    w = x + 1; //x + 1 is r value, operators that return a value is also r value

    l value evalues to an idetifiable
    r value is temportay


    = (assignment operator), required an l value to be on the left operand to be  
      a modifieable l value 

      right side operand can be anyting


    int y = 5; x = 6;


    y = x; //value is evalued  on the right and assigned to the left side


    int x = 5; // l value

    int x = 1; //

    int x = 5;
    int y = x; 

    l valeu - identiable object has and persists beyond the expressoion
    r value - evalue values that does not persist beyong the expression

    // =================================================
    reference is an alias for existing object;

    what ever operation you do to the refernce it will be appied on the object

    you can use it to read or modfiy the object

    we can also use reference 

    l value reference - reference (alias) for an l value

    int a; //normal int variable

    int& a; //l value reference to an int object
            //int & is a type of l value reference an int object
            
    reference type = a type 

    int x = 5;

    int& y = x; // y is an int& type refernce, l value reference, another name for variable x
                //


*/


main()
{

    int x = 5;

    int& y = x; //int& will be a better style

   //reference is not for the identifer, it is for the type identifye
   //int& is a type of the l value reference
    cout<< "y: " << y <<"x: " << x<<endl;

    //what we can do with l value reference?
    //y is l value reference variable of type int& referring to variable x
    //
    
    y = 6; //non const referance

    cout<< "y: " << y <<"x: " << x<<endl;

    const int& z = x; //const reference

    cout<< "z: " << z <<"x: " << x<<endl;

    const int l = 8;

    const int& l_ref = l; //we cannot bind non const l value reference to a non-modfieable to l value
                    //else it will violation of const value

    cout<< "l_ref: " << l_ref <<"l: " << l<<endl;

    // a refence will mostly bind to object where type matches;
    // a reference cannot be re initstated

    int t = -1;

    //&y = t;
    y = t;

    cout<< "t: " << t <<"y: " << y<<endl;
    cout<< "y: " << y <<"x: " << x<<endl;

    //reference is basically x

}


