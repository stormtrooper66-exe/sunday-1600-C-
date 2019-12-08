#include <iostream>
#include <cmath>
using namespace std;

void sum (int j, int k, int r, int n, int z);

void sum (int j, int k, int r, int n, int z)
{
    if (n == 1)
    {
        cout << n <<endl;
    }
    else
    {
        while( j <= k)
           {
               r *=n;
               j++;
           }
        z = r;
        cout << z <<endl;
    }
}

int main()
{
    int n, k, z ;
    cin>>n >> k;
    int j = 1;
    int r = 1;
    sum (j, k, r, n, z);
}

/*
 int n, k, result;
 cin>>n;
 cin>>k;
 int i = 1;
 if (n == 1)
 {
     result = pow (i, k);
     cout <<result<<endl;
 }
 else
 {
     while ( i <= n )
     {
     result = pow(i , k) + pow ((i+1), k) - 1;
     i++;
     }
     cout <<result<<endl;
 }
 
 */
