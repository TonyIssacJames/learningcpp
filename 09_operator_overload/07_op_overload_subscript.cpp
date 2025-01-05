#include<iostream>


class IntList
{
    private:
            int m_list[10]{};

    public:
            const int& operator[](const int& idx) const
            {
                return m_list[idx];
            }

            // int& operator[](const int& idx) const
            // {
            //     assert()
            //     return m_list[idx];
            // }


            void print(const int& idx) const
            {
                std::cout<<m_list[idx]<<std::endl;
            }

            

};

int main()
{

    const IntList list{};
    //IntList list1{};
    //list1[2] = 33; //subsrict operator has higher precedence than assignment operator
                  //when it evalues list.m_list[2]
                  //since[] returns [] reference it will update the location
                  //

    /*
        int x = 3;
        int y = 3;

        x = y;//why it works, because y evalues to 3 an r vlue
    
     */
    std::cout<<list1[2]<<std::endl;
    list1.print(2);

    //copy constructor and copy assignment operator
    //copy construct creates a new object
    //copy assignment operator
    //if a new objects is created before copying , then copy condtructor
    //copy constructor is 
    //copy assignment operator has to be overloaded as a member function
    // it will have only one argument
    //destination is the object it sefl


    //copy constructor, copy assignment operators
    //overloading operator, and function and function templates
}