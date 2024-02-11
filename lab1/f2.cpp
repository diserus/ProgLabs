#include <iostream>
using namespace std;

float pow(float x, int n)
{
    bool flag=0;
    float y=1;
    if (n<0)
    {
        flag = 1;
        n=n*(-1);
    }
    for (int i=1;i<=n;i++) y = y*x;
    
    if (flag) return 1/y;
    else return y;
}

int main()
{
    float x;
    int n;
    cin >> x >> n;
    cout << pow(x,n); 
    return 0;
}