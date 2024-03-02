#include <iostream>
#include <time.h>

int main()
{
    int m=0;
    int n=5;
    int maxM=0;
    int maxN=0;
    int max=0;
    std::cout << "Input M:"; // количество строк
    std::cin >> m;
    
    int** B = new int*[m];
    for (int i = 0; i < m; ++i)
        B[i] = new int[n];
    srand(time(NULL));
    
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
           printf("%3d",B[i][j]);
        }
        std::cout << "\n";
    } 
    
    std::cout << "\n";
    int** C = new int*[m-1];
    for (int i = 0; i < m-1; ++i)
        C[i] = new int[n-1];
    
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (max < B[i][j])
            {
                max=B[i][j];
                maxM=i;
                maxN=j;
            }
        }
        
    } 
    
    std::cout << "Max element: " << max << "\n";
    std::cout << "C matrix: " << "\n";
    
    for (int i = 0, iC = 0; i<m; i++)
    {
        if (maxM==i) continue;
        for (int j=0, jC=0; j<n; j++)
        {
            if (maxN==j) continue;
            C[iC][jC]=B[i][j];
            jC++;
        }
        iC++;
    } 
    
    for (int i = 0; i<m-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
           printf("%3d",C[i][j]);
        }
        std::cout << "\n";
    } 
    for (int i=0; i<m; i++)
    {
        delete B[i];
        B[i]=NULL;
    }
    delete B;
    B = NULL;
    for (int i=0; i<m-1; i++)
    {
        delete C[i];
        C[i]=NULL;
    }
    delete C;
    C = NULL;
    return 0;
}