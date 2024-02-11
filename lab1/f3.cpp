#include <iostream>
#include <math.h>
double cosinus(double x)
{
    double an=1,s = an,eps=0.0001;
    int n = 1;
    while(fabs(an)>eps)
    {
           an*=-x*x/(2.*n*(2*n-1));
           s+=an;
           n++;
    }
    return s;
 }

 int main()
 {
    int x;
    std::cin>>x;
    std::cout << cosinus(x);
    return 0;
 }