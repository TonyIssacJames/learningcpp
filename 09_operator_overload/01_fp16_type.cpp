/*
    1 - in C++, operators are implemented as functions
    2 - the compiler follows some rules
        1 - all are fundamental 
        2 - function overload resoluotion
        3 - most existing operator cannot be overloaded
        4 -  ?:, ::, .*  cannot be overloaded
                - cond? exp1 : exp2; //does not fit into the constraints of compiler desing
                - ISA, RISC, CISC
                - we want to make the compiler simple
                - but grammar check will be complex

        5 -  we can only overload an existing operator
        6 -  multiple ways of operloading operators
             1 - member functions
             2 - friend functions
                    i -  not a member function
                    2 -  we are giving controleed access privat members of the class
                    3 -  friend is way to give special access to private, protected variable without making them public
                    4 -  providing interface between classes
             3 - normal functions

 */


#include <iostream>

class Cents
{
    private:
             int m_cents {};
    public:
             explicit Cents(int cents): m_cents{cents} {std::cout << __func__<<":"<<__LINE__ << std::endl;} //parameterized constructor
             explicit Cents(double cents): m_cents{(int)cents} {std::cout << __func__<<":"<<__LINE__ << std::endl;} //parameterized constructor

             //member initilisation list

             int getCents() const {
                return m_cents;
             }

            //even though friend function not members of the class they can be defined inside the class
            //
            friend Cents operator+(const Cents& c1, const Cents& c2)
            {
                return (c1.m_cents + c2.m_cents);

            }

            // friend Cents operator+(int c1, const Cents& c2)
            // {
            //     return (c1 + c2.m_cents);

            // }

            // friend Cents operator+(const Cents& c1, int c2)
            // {
            //     return (c1.m_cents + c2);

            // }


            // Cents operator+(Cents& c2)
            // {
            //     return Cents(this->m_cents + c2.m_cents);
            // }

            //<< operator does not have anythong for Cents so it will give error
            //const - it is better to use, so we modify, it is the best practice
            //ref efficient - will not copy, you are not create of c1, c2, not created a duplicate
            // 


};

main()
{
    Cents myCents1(30);
    Cents myCents2(11);


    Cents myCents3(0);


    myCents3 = myCents1 + myCents2;
    std::cout << "myCents1 = " << myCents1.getCents() << std::endl;

    std::cout << "myCents3 = " << myCents3.getCents() << std::endl;

    int a = 6;


    myCents3 = a + myCents2;
    std::cout << "a + myCents2 = " << myCents3.getCents() << std::endl;

    myCents3 = myCents1 + 8;
    std::cout << "myCents1 + 8 = "<< myCents3.getCents() << std::endl;

    std::cout << __func__<<":"<<__LINE__ << std::endl;
    myCents3 = myCents1 + 11.5f;
    std::cout << "myCents1 + 11.5f = "<< myCents3.getCents() << std::endl;

}

//implicit converstion can create issue sometimes
//make not 