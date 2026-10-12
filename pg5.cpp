#include<iosteram>
using namespace std;
inline int square(int x)
{
return x * x;
}
double area(double r)
{ 
    return 3,14 * r *r;
}
int area(int l, int b)
{
    return l * b;

}
double area (double b, double b)
{
    return 0.5 *l * b;
}
int main()
{
    cout << "square (6)= "<< square(6)<<endl;
    cout << "area of circle with radius "<< 2.0 << ""is" << area (2.0) << endl;
    cout << "area of rectangle with length " << 4<< "and breadth "<< 5<< " is " << area (4, 5)<< endl;
    cout << "area of triangle ="<< area (4.0, 5.0)<< endl;
    return 0;
}