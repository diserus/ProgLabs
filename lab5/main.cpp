#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int m,k;
    cout << "Input m and k (k<m): ";
    cin >> m >> k;
    int * A = new int[m];
    srand(time(NULL));
    for (int i = 0; i<m; i++)
        A[i] = rand() % 50;
    
    int rows = m/k;
    if (m%k!=0) 
        rows++;
    int ** B = new int*[rows];
    for (int i=0; i<rows; i++)
        B[i] = new int[k];
    
    int indexA = 0;
    for (int i = 0; i<rows; i++)
    {
        for (int j = 0; j<k; j++)
        {
            if (indexA < m)
                B[i][j] = A[indexA++];
            else 
                B[i][j] = 0; 
        }
    }
    
    for (int i = 0; i<rows; i++)
    {
        for (int j=0; j<k; j++)
        {
           printf("%4d",B[i][j]);
        }
        std::cout << "\n";
    } 

    for (int i=0; i<m; i++)
    {
        delete B[i];
        B[i]=NULL;
    }
    delete B;
    B=NULL;
    
    delete A;
    A=NULL;
    return 0;
}