#include <iostream>
const int n = 5;
typedef int rown[n];
int main()
{
    int m;
    std::cout << "Input M (stroki):";
    std::cin >> m;
    rown *B;
    B = new rown[m];
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            B[i][j] = rand()% 50;
        }
    }
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            std::cout << B[i][j]<< " ";
        }
        std::cout << "\n";
    } 
    return 0;
}