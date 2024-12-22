
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

//Write a function template named add() that allows the users to add 2 values of the same type. 
//The following program should run:

#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
}

// write your add function template here

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}

//==============================================
//Write a function template named mult() that allows the user to multiply one value of any type 
//(first parameter) and an integer (second parameter). 
//The second parameter should not be a template type. 
//The function should return the same type as the first parameter. 
//The following program should run:
#include <iostream>

// write your mult function template here

template <typename T>
T mult(T a, int b)
{
    return a*b;
}

int main()
{
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}

//=================================================
//Question 6:Write a function template named sub() that allows the user to subtract 
//two values of different types. The following program should run:

#include <iostream>

// write your sub function template here
template <class T1, class T2, class Z>
Z sub(T1 a, T2 b)
{
    Z res = a - b ;
    
    return res;
}

template <class T1, class T2>
double sub(T1 a, T2 b)
{
    double res = a - b ;
    
    return res;
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	//std::cout << sub<int, int, int>(3, 2) << '\n';
	//std::cout << sub<double, int, double>(3.5, 2) << '\n';
	//std::cout << sub<int, double, double>(4, 1.5) << '\n';



	return 0;
}

//===============================================

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

//Question 6:Write a function template named sub() that allows the user to subtract 
//two values of different types. The following program should run:

#include <iostream>

// write your sub function template here
//template <class T1, class T2, class Z>
//Z sub(T1 a, T2 b)
//{
//    Z res = a - b ;
//    
//    return res;
//}

template <class T1, class T2>
auto sub(T1 a, T2 b) //does not work with C++ 11, works with 
{
    //auto res = a - b ;
    
    return a - b;
}


//template <class T1, class T2>
//double sub(T1 a, T2 b)
//{
//    double res = a - b ;
//    
//    return res;
//}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	//std::cout << sub<int, int, int>(3, 2) << '\n';
	//std::cout << sub<double, int, double>(3.5, 2) << '\n';
	//std::cout << sub<int, double, double>(4, 1.5) << '\n';



	return 0;
}