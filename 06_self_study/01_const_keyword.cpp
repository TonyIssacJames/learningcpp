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
	This code proves that 
	
	1 - we cannot have int add_func(int &a, int &b) & int add_func(int a, int b)
	2 - add_func(const int &a, const int &b) can work with literas
	    so this is better while overloading, while the normal one
		add_func(int &a, int &b) cannot have literals
		
	3 - may be for primitives referenes may not give any performance advantage
*/



void func(int& ip)
{
    ip++;
    cout <<__func__<<" - " <<__LINE__<<" : "<< ip <<endl;
}


void func(int* ip)
{
    (*ip)++;
    cout <<__func__<<" - " <<__LINE__<<" : "<< *ip <<endl;
}

#if 0
int add_func(int &a, int &b)
{
    cout <<__func__<<" - " <<__LINE__<<" : "<< a <<endl;
    return a + b;
}






int add_func(int &a, const int &b)
{
    cout <<__func__<<" - " <<__LINE__<<" : "<< a <<endl;
    return a + b;
}


int add_func(const int &a,int &b)
{
    cout <<__func__<<" - " <<__LINE__<<" : "<< a <<endl;
    return a + b;
}
#endif

int add_func(const int &a, const int &b)
{
    cout <<__func__<<" - " <<__LINE__<<" : "<< a <<endl;
    return a + b;
}


int main()
{
    printf("Hello World\n");
    
    int a = 10;
    
    int& ref = a ;
    
    int b = 5;
    int c;
    
    func(a);
    
    printf("a = %d\n", a);
    ref = a;
    func(&a);
    
    printf("a = %d\n", a);
    
    ref = 19;
    printf("a = %d\n", a);
    
    
    func(b);
    printf("b = %d\n", b);
    

    c = add_func(a, b );
    printf("c = %d\n", c);  
    
    c = add_func(a, 10);
    printf("c = %d\n", c); 
    
    
    c = add_func(10, 10);
    printf("c = %d\n", c);   
    
    c = add_func(10, b);
    printf("c = %d\n", c);     
    
    return 0;
}