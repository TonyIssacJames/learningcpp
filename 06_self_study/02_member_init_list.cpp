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
	member init list is supposed to optimise the constructor call in certain cases, but it does not happen

*/

class Entity
{
public:
    int x;
    
    Entity()
    {
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    }
    
    Entity(int x1)
    {
        x = x1;
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    }
 
    Entity(int x1)
		:x(x1)
    {
        cout <<__func__<<" - " <<__LINE__<<" : "<< x <<endl;
    } 
    int get_x()
    {
        return x;
    }
};

int main()
{
    printf("Hello World\n");
    
    Entity e1;
    
    printf("e1 = %d\n", e1.get_x());
    
    
    Entity e2 = 8;
    
    printf("e2 = %d\n", e2.get_x());
    
    
    e2 = 9;
    printf("e2 = %d\n", e2.get_x());
    
    
    Entity e3 = Entity(13.0f);//supposed to have two constructors,
    //but compiler may optimse this
    
    printf("e3 = %d\n", e3.get_x());
    return 0;   
}