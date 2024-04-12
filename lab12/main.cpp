#include "sorts.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> arr(10000);
    vector<double> arrd(10000);
    cout << "\tInt\n";
    FillRand(arr);
    cout << "Bubble sort: " << timer(BubbleSort, arr) << " seconds\n";

    FillRand(arr);
    cout << "Select sort: " << timer(SelectSort, arr) << " seconds\n";

    FillRand(arr);
    cout << "Shaker sort: " << timer(ShakerSort, arr) << " seconds\n";

    cout << "\tDouble\n";
    FillRand(arrd);
    cout << "Bubble sort: " << timer(BubbleSort, arrd) << " seconds\n";

    FillRand(arrd);
    cout << "Select sort: " << timer(SelectSort, arrd) << " seconds\n";

    FillRand(arrd);
    cout << "Shaker sort: " << timer(ShakerSort, arrd) << " seconds\n";
    return 0;
}
