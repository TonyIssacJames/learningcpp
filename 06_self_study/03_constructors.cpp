/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*
    static function does not 

    1 -  we cannot initilise a static member in the class, as it requires initilisation
         we  can do it only outside main, this defnition need to be accesse by every one
		 
	2 -  two way to avoid calling of constructo for Entity()
			i - hide it (make it private)
			2 - delete it
*/

class Entity
{

private:
    //static int counter = 0; //error: ISO C++ forbids in-class initialization of non-const static member ‘Entity::counter’
    static int counter;
/*
    Entity()  //hide the constructor
    {}
*/    
public:

    //Entity() = delete;
    
    static void static_method()
    {
        cout <<__func__<<" - " <<__LINE__<<" : "<< counter++ <<endl;
    }
    
    
};

int Entity::counter = 0;
    
int main()
{
    std::cout<<"Hello World";
    
    //int Entity::counter = 0;  //error: qualified-id in declaration before ‘=’ token
    
    Entity::static_method();

    //Entity t1; //error: use of deleted function ‘Entity::Entity()’
    
    //Entity t1; //Hide the constructor error: ‘Entity::Entity()’ is private within this context
    
    
    
    return 0;
}