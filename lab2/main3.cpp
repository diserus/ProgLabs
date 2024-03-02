#include <iostream>
using namespace std;

void perevodv2(int n) 
{
    int ost;
    if (n > 0) 
    {
      ost = n % 2;
      n /= 2;
      perevodv2(n);
      cout << ost;
    }
}

int main() 
{
    int n;
    cout << "VVedite chislo, kotoroe budet perevedeno v dvoichnuyu sistemu "
          "schisleniya: " << endl;
    cin >> n;
    perevodv2(n);
    return 0;
}
