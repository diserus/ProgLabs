#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    
    std::cout << "Input n: ";
    std::cin >> n;
    int* b = (int*)malloc(n * sizeof(int));

    srand(time(NULL));
    for(int i = 0; i<n; i++)
    {
        b[i] = rand() % 101 - 50;
    }
    
    int m = 0;
    int k = 0;
    for (int i = 0; i<n; i++)
    {
        if (b[i]>0) m++;
        else if (b[i]<0) k++; 
    }
    
    int* c = (int*)malloc(m * sizeof(int));
    int* d = (int*)malloc(k * sizeof(int));

    int indexC = 0;
    int  indexD = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i]>0) c[indexC++]=b[i];

        else if (b[i]<0) d[indexD++]=b[i];
    }
    
    std::cout <<"\n"<< "Original array"<<"\n";
    for (int i=0; i<n; i++) 
    {
        std::cout << b[i] << " ";
    }
    std::cout <<"\n"<< "Array of positive numbers"<<"\n";
    for (int i=0; i<m; i++) 
    {
        std::cout << c[i] << " ";
    }
    std::cout <<"\n"<< "Array of negative numbers" << "\n";
    for (int i=0; i<k; i++) 
    {
        std::cout << d[i] << " ";
    }

    free(b);
    free(c);
    free(d);
    return 0;
}