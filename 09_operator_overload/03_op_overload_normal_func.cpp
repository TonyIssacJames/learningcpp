#include <iostream>

class Fraction
{
private:
            int m_num, m_denum;
public:
            Fraction(int num, int denum): m_num{num}, m_denum{denum}{}

            void print()
            {
                std::cout<<m_num<<"/"<<m_denum << std::endl;
            }


            // Fraction operator*(int f1,  const Fraction& f2)
            // {
            //     return Fraction(f1*f2.m_num, f2.m_denum);
            // }

            // friend Fraction operator*(const Fraction& f1, int f2)
            // {
            //     return Fraction(f2*f1.m_num, f1.m_denum);
            // }

            // Fraction operator*(const Fraction& f1, const Fraction& f2)
            // {
            //     return Fraction(f1.m_num*f2.m_num, f1.m_denum*f2.m_denum);
            // }

            Fraction operator*(const Fraction& f2)
            {
                return Fraction(m_num*f2.m_num, m_denum*f2.m_denum);
            }
            //why we are 
            //integer to fraction will be 
            //implicit convertion can be a very slow process
            //
};





int main()
{

    Fraction f1(1, 4);
    Fraction f2(5, 4);

    f1.print();


    Fraction f3 (1,1);

    f3 = f1* f2;
    f3.print();


}



/*


*/