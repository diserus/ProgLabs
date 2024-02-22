#include <iostream>
#include <time.h>
int main()
{
    int n;
    
    std::cout << "Input n: ";
    std::cin >> n;

    double *a = new double[n];
    double **b = new double*[n];
    
    srand(time(NULL));
    for (int i=0; i<n;i++)
    {
        a[i] = (double)rand() / RAND_MAX * 10;
    }

    for (int i=0; i<n; i++)
    {
       b[i]=&a[i];
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (*b[j] > *b[j + 1]) 
            {
                double* temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    std::cout <<"A array"<< std::endl;
    for (int i=0; i<n;i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout <<"\n"<<"sorted B array"<< std::endl;
    
    for (int i=0; i<n;i++)
    {
        std::cout << *b[i] << " ";
    }
    
    delete a;
    a=NULL;
    delete b;
    b=NULL;
    return 0;
}