#include <iostream>
#include <math.h>
using namespace std;
int function(double a, double b, double c, double * area, double * perimetr)
{
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        return 0; 
    }
    *perimetr = a+b+c;
    double p=*perimetr/2;
    *area = sqrt(p*(p-a)*(p-b)*(p-c));
    return 1;
}
int main()
{
    double a,b,c;
    cout << "Input sides of triangle: ";
    cin >> a >> b >> c;
    double area;
    double perimetr;
    
    if (function(a,b,c,&area,&perimetr))
        cout << "Area = " << area << "\n" << "Perimetr = " << perimetr;
    else
        cout << "Error";
    return 0;
}