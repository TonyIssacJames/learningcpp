#include <iostream>
using namespace std;

class Fraction
{
private:
            int m_num, m_denum;
public:
            Fraction() {}
            Fraction(int num, int denum): m_num{num}, m_denum{denum}{}

            void print()
            {
                std::cout<<m_num<<"/"<<m_denum << std::endl;
            }

            friend Fraction operator*(int f1,  const Fraction& f2)
            {
                return Fraction(f1*f2.m_num, f2.m_denum);
            }

            friend Fraction operator*(const Fraction& f1, int f2)
            {
                return Fraction(f2*f1.m_num, f1.m_denum);
            }

            friend Fraction operator*(const Fraction& f1, const Fraction& f2)
            {
                return Fraction(f1.m_num*f2.m_num, f1.m_denum*f2.m_denum);
            }

            friend ostream& operator<< (ostream& out, const Fraction& f1)
            {
                out << "Fraction(" << f1.m_num<<"/"<< f1.m_denum<<")";
                return out;
            }
            //when you want to an operator chaniable, 
            //left has to be passed by non-const reference
            //also return non-const reference

            friend istream& operator>> (istream& in, Fraction& f1)
            {
                int num, denum;
                if(in>> num>> denum)
                {
                    f1 = Fraction(num, denum);
                }
                
            }

            //for unary operator, overload as member function only


            // bool operator==(int f1,  const Fraction& f2)
            // {
            //     return Fraction(f1*f2.m_num, f2.m_denum);
            // }

            //++,-- overload as member function only
            Fraction& operator++()
            {
                this->m_num++;
                return *this;
            }
};


int main()
{
	Fraction f1{};
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;

	Fraction f2{};
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n'; // note: The result of f1 * f2 is an r-value

	return 0;
}