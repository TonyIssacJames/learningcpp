#include <iostream>
using namespace std;

class Point{

private:
    double m_x, m_y, m_z;

public:
        Point(double x =0.0, double y=0.0, double z=0.0)
        :m_x{x},m_y{y},m_z{z}
        {


        }

        //it is not a value, it is ostream object changes
        //out cannot be const because it has to modfieable
        //it is modfied in our function
        //and we have to pass by referce, when they have deleted that overloading
        //what if 
        
        friend ostream& operator<< (ostream& out, const Point& point)
        {
            out << "Point(" << point.m_x<<","<<point.m_y<<","<<point.m_z<<")";
            return out;
        }
        //when you want to an operator chaniable, 
        //left has to be passed by non-const reference
        //also return non-const reference

        friend istream& operator>> (istream& in, Point& point)
        {
            in>> point.m_x >> point.m_y>>point.m_z;
        }

};


int  main()
{

    Point p1 = {1.1, 2.2, 3.2};
    Point p2 = {1.1, 2.2, 3.2};

    cout<<p1<<std::endl;

    cin >> p2; //need to enter value by entering after one another
    

    cout<<p2<<std::endl;
}