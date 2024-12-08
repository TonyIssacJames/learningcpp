#include <iostream>

using namespace std; //

/*
    we have to tell the compiler that T is place holder type
    we will tell using template parameter declaration
    scope of T is limited to functin template

    template - tells the compiler we are createting a template
    and insided <> we tell, these are defined types
*/
template <class T, class Y, class Z>
Z max_func(T  a, Y b)
{
    return (a > b)? a : b;
}

// template <class T, class Y>
// auto max_func(T  a, Y b)
// {
//     return (a > b)? a : b;
// }

/*
    when we put auto compiler is able to deduce the type of the variable

    auto a = 10; //compiler will be able to deduce the type from initialisaiton

*/

/*
//DRY concept
//place holder, which will provided later
//at 
template can be used 
compiler generate as many template functions as needed
compiler does the work
using template, converting template to overloaded functions (extra step happens)
when we write a template funciton we put a place holder type
*/
main()
{
    
    // cout << max_func(5, 6)<<endl;
    // cout << max_func(7.0, 4.0)<<endl;

    // cout << max_func(true, 4.0)<<endl;
    //cout << max_func(true, 4.0)<<endl;


    //int z = max_func(5, 6); //
    int z = max_func<int, int, int>(5, 6); //
}

//SUmmarized
/*
1 - function overloading
2 - exact match, numeric promotion, numberic convertion
3 - default parameter , right most 
    default parameter are not used differentiate overloaded functions
4 - function template, 
    use a template to generate 



    print(int)
    print(double)

    main()
    {
        short s = 5;
        print(s);
    }
    //======================

    //print()
    //print(int x = 0)
    print(double)
    print(long)
    main()
    {
      
        //print(5.0f);
        //print();
        print(5); //int to 
    
            int to long is not numerical conversion
            bool, short, char converted to int
            unsinged (bool, short, char) to unsinged int
         

    }
//=================================
    //template<class T>
    template<typename T>
    T add(T a, T b)
    {
        return a+ b;
    }

    template<typename T>
    T add(T a, int b)
    {
        return a+ b;
    }

    main()
    {
        //add(2, 3);
        //add(2.5, 4.0)
        add(2, 4.0)
    }

*/

