#include <iostream>


int main()
{
    int n;
    
    std::cout << "Input n: ";
    std::cin >> n;
    int *a = new int [n];

	for (int i = 2; i <= n; i++) 
    {
        a[i] = 1;
    }

    for (int i = 2; i * i <= n; ++i) 
    {
        if (a[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                a[j] = 0;
            }
        }
    }
    
    std::cout << std::endl;

    for (int i = 2; i <= n; ++i) 
    {
        if (a[i]) 
        {
            std::cout << i << " ";
        }
    }
    
    delete a;
    a=NULL;
    return 0;
}