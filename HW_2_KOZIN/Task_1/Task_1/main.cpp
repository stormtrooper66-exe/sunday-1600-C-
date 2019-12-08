#include <iostream>
using namespace std;
class Box
{
    public :
    double a_1;
    double b_1;
    double c_1;
    Box(double a, double b,  double c)
    {
        a_1 = a;
        b_1 = b;
        c_1 = c;
    }
    void  vol(double a_1, double b_2,double c_3)
    {
         double V;
         V = a_1 * b_1 * c_1 ;
        cout<<"volume is : "<<V<<endl;
    };
};
int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    Box obj(a,b,c);
    obj.vol(a,b,c);
    
    
    return 0;
}
// V = abc
