#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int rows = 9;
    int cols = 0;
    int ** table = new int*[rows];
    for (int i = 0; i <rows; i++)
    {
        table[i] = new int[cols++];
    }
    for (int i = 0; i<rows;i++)
    {
        for (int j = 0;j<=i;j++)
        {
            table[i][j] = (i+1)*(j+1);
        }
    }
     
    for (int i = 0; i<rows; i++)
    {
        for (int j=0; j<=i; j++)
        {
           printf("%4d",table[i][j]);
        }
        std::cout << "\n";
    } 

    for (int i=0; i<rows; i++)
    {
        delete table[i];
        table[i]=NULL;
    }
    delete table;
    table=NULL;
    return 0;
}