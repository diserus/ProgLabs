#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void obnull(vector <int> &A)
{
    int min1=100;
    int min2=100;
    for (int i = 0; i < A.size();i++)
    {
        if (min1>A[i])
        {
            min2=min1;
            min1=A[i];
         
        }
        else if (min2 >A[i])
            min2 = A[i];
    }
    if (min1 > min2) 
    {
        swap(min1, min2);
    }
    int indexMin1 = find(A.begin(),A.end(),min1)-A.begin();
    int indexMin2 =find(A.begin(),A.end(),min2)-A.begin();
    if (indexMin1 > indexMin2) 
    {
        swap(indexMin1, indexMin2);
    }
    
    for (int i = indexMin1 + 1; i < indexMin2; i++) 
    {
        A[i] = 0;
    }
}

int main()
{
    int size = 0;
    cout << "Input size of array: ";
    cin >> size;
    vector <int> A;
    srand(time(NULL));
    for (int i = 0; i<size; i++)
        A.push_back(rand() % 50);
    for (int i : A)
        cout << i << " ";
    
    cout << "\n";
    obnull(A);
    for (int i : A)
        cout << i << " ";
    return 0;
}