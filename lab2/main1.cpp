#include <iostream>
using namespace std;

void input() 
{
    int n;
    cin >> n;
    if (n != 0) 
    {
        if (n > 0) 
        {
            input();
            cout << n << " ";
        }
        else
            input();
    }
}

int main() 
{
    cout << "Vvedite posledovatelnost chisel (0 dlya zaversheniya vvoda):" << endl;
    input();
    return 0;
}
