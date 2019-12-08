#include <iostream>
using namespace std;

void sqrt (int n);

void sqrt(int n)
{
    int x;
    int z = 1;
    while (x != n)
    {
        x = n / z ;
        x *= x;
        z++;
    }
    z = z - 1;
    cout << z << endl;
}

int main()
{
    int n;
    cin>> n;
    sqrt(n);
    
    return 0;
}


/* int n;
cin>> n;
int x;
int z = 1;
while (x != n)
{
    x = n / z ;
    x *= x;
    z++;

}
z = z - 1;
cout << z << endl;

*/
