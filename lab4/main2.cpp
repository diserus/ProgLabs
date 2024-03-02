#include <iostream>
#include <time.h>

int main()
{
    int m=0,n=0;
    std::cout << "Input M and N : \n";
    std::cin >> m >> n;

    int ** A = new int*[m];
    for (int i = 0; i<m; i++)
        A[i] = new int[n];
    
    srand(time(NULL));
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            A[i][j] = rand()% 50;
        }
    }

    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
           printf("%3d",A[i][j]);
        }
        std::cout << "\n";
    } 

    int ** D = new int*[m+1];
    for (int i = 0; i<m+1; i++)
        D[i] = new int[n+1];

    int sm[m]={0};
    int sumAll=0;
    for (int i = 0; i<m;i++)
    {
        int sumStr=0;
        for (int j = 0; j<n;j++)
        {
            sm[j]+=A[i][j];
            sumStr+=A[i][j];
            D[i][j]=A[i][j];
            if (j==n-1) D[i][j+1]=sumStr;
        }
        if (i==m-1)
        {
            for (int k=0;k<m;k++)
            {
                D[i+1][k]=sm[k];
                sumAll+=sm[k];
            }
        }
    }

    D[m][n]=sumAll;
    std::cout << "\n";

    for (int i = 0; i<m+1; i++)
    {
        for (int j=0; j<n+1; j++)
        {
           printf("%4d",D[i][j]);
        }
        std::cout << "\n";
    } 
    for (int i=0; i<m; i++)
    {
        delete A[i];
        A[i]=NULL;
    }
    delete A;
    A=NULL;
    for (int i=0; i<m+1; i++)
    {
        delete D[i];
        D[i]=NULL;
    }
    delete D;
    D=NULL;
    return 0;
}