#include <iostream>
using namespace std;

void conclusion(int A[], int i, int n) 
{
    if (i >= n)
        return;

    if (A[i] < 0) 
    {
        cout << A[i] << " ";
    }

    conclusion(A, i + 1, n); 

    if (A[i] > 0) 
    {
        cout << A[i] << " ";
    }
}

int main() 
{  
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    
    conclusion(A, 0, n);

    return 0;
}
