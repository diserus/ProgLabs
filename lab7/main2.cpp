#include <vector>
#include <iostream>
using namespace std;
int sum(vector<int> &A)
{
    int sum=0;
    for (int i = 0; i<A.size();i++)
        sum+=A[i];
    return sum;
}
int main()
{
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    vector <vector<int>> A(rows);
    srand(time(NULL));
    for (int i = 0; i<A.size();i++)
    {
       
        for (int j = 0; j<rand()%10+2;j++)
        {
           
            A[i].push_back(rand()%10+2);
        }
        A[i].insert(A[i].begin(),sum(A[i]));
    }
    for (int i = 0; i<A.size();i++)
    {
        for(int j=0; j<A[i].size();j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}