#include <iostream>
#include <math.h>
using namespace std;
int factorial (int x) 
{ 
    if ( x == 0 ) return 1;
    return x * factorial (x - 1);
}
void boysAndGirls(int n,int m,double &pd,double &pm)
{
    if (m>n || m<0 || n<0)
    {
        cout << "Error";
        exit(EXIT_FAILURE);
    }
    double p=0.45;
    double q = 1-p;
    int c = factorial(n)/(factorial(m)*factorial(n-m));
    pm = c * powf(q,m)*powf(p,(n-m));
    pd = c * powf(p,m)*powf(q,(n-m));
}
int main()
{
    int n,m;
    double pd,pm;
    cout << "Input N: ";
    cin >> n;
    cout << "Input the number of boys(M): ";
    cin >> m;
    boysAndGirls(n,m,pd,pm);
    cout << "Probability of girls: " << pd << "\n" << "Probability of boys: " << pm;
    return 0;
}