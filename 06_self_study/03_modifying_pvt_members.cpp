/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

/*
	this code proves that you can modify private members with pointers
	privage, protected, public are visibility modfiers only for the compiler and humans
	
	CPU does not know about such thins

*/


class Entity
{

    int x;
public:    
    Entity()
    {
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    }
/*    
    Entity(int x1)
    {
        x = x1;
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    }
*/ 
    Entity(int x1)
		:x(x1)
    {
        printf("addres of x = %lx\n", reinterpret_cast<unsigned long>(&x));
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    } 

    int get_x()
    {
        return x;
    }
    
    void set_x(int x1)
    {
        x = x1;
    }
};

int main()
{
    printf("Hello World\n");
    
    Entity e1;
    
    printf("e1 = %d\n", e1.get_x());
    
    
    Entity e2 = 8;
    
    printf("e2 = %d\n", e2.get_x());
    
    
    printf("addres of e2 = %lx\n", reinterpret_cast<unsigned long>(&e2));
    
    int* intPtr = reinterpret_cast<int*>(&e2);
    
    
    *intPtr = 99; //by passing the protection
    printf("e2 = %d\n", e2.get_x());
    return 0;
}