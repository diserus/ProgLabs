#include <iostream>
using namespace std;

void date(int year)
{
    int a = year % 19;
    int b = year % 4;
    int c = year % 7;
    int d = (19 * a + 15) % 30;
    int e = (2 * b + 4 * c + 6 * d + 6) % 7;
    int f = d + e;
    if (f<=26)
        cout << 4+f << " april" << endl;
    else
        cout << f-26 << " may" << endl;
}

int main()
{
    int year;
    cin >> year;
    date(year);
    return 0;
}