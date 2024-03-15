#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void decSort(vector <int> &A)
{
    sort(A.rbegin(),A.rend());

}
void fillRand(vector <int> &A)
{
    for (int i = 0; i< A.size(); i++)
    {
        A[i] = rand()%100;
    }
}
void printVec(vector <int> &A)
{
    for (int i : A) cout << i << " ";
    cout << "\n\n";
}

int pereborSearch(vector <int> &A,int &elem,int &c)
{
    c=0;
    for (int i = 0; i<A.size();i++)
    {
        c++;
        if (A[i]==elem) return i;
    }
    return -1;
}
int binarySearch(vector<int>& A, int &elem, int& c) 
{
    c = 0;
    int l = 0;
    int r = A.size() - 1;

    while (l <= r) 
    {
        c+=2;
        int i = l + (r - l) / 2;

        if (A[i] == elem) 
            return i;  
        else if (A[i] > elem) 
            l = i + 1;
        else 
            r = i - 1;
    }
    return -1;  
}



int main()
{
    int c=0;
    vector <int> A(100);
    vector <int> B(1000);
    fillRand(A);
    fillRand(B);
    decSort(A);
    decSort(B);
    printVec(A);
    printVec(B);
    int elem;
    cout << "Input elem that you want to find: ";
    cin >> elem;
    cout << "\nIndex of elem in A array: " << pereborSearch(A,elem,c) << "\n";
    cout << "Number of comprassions with pereborSearch: " << c << "\n";
    binarySearch(A,elem,c);
    cout << "Number of comprassions with binarySearch: " << c << "\n";
    
    cout << "\nIndex of elem in B array: " << pereborSearch(B,elem,c) << "\n";
    cout << "Number of comprassions with pereborSearch: " << c << "\n";
    binarySearch(B,elem,c);
    cout << "Number of comprassions with binarySearch: " << c << "\n";
    return 0;
}