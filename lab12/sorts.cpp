#include "sorts.hpp"

void BubbleSort(vector<int> &arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void BubbleSort(vector<double> &arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void SelectSort(vector<int> &arr)
{
    int k;
    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        k = i;
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }

        swap(arr[i], arr[k]);
    }
}

void SelectSort(vector<double> &arr)
{
    int k;
    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        k = i;
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }

        swap(arr[i], arr[k]);
    }
}

void ShakerSort(vector<int> &arr)
{
    int L = 0, R = arr.size() - 1, k;
    do
    {
        k = R;
        for (int j = R; j > L; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                k = j;
            }
        }
        L = k;
        for (int j = L; j < R; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                k = j;
            }
        }
        R = k;
    } while (L < R);
}

void ShakerSort(vector<double> &arr)
{
    int L = 0, R = arr.size() - 1, k;
    do
    {
        k = R;
        for (int j = R; j > L; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                k = j;
            }
        }
        L = k;
        for (int j = L; j < R; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                k = j;
            }
        }
        R = k;
    } while (L < R);
}

double timer(void (*f)(vector<int> &arr), vector<int> &arr)
{
    clock_t tStart = clock();
    f(arr);
    return (double)(clock() - tStart) / CLOCKS_PER_SEC;
}

double timer(void (*f)(vector<double> &arr), vector<double> &arr)
{
    clock_t tStart = clock();
    f(arr);
    return (double)(clock() - tStart) / CLOCKS_PER_SEC;
}

void FillRand(vector<int> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = rand() % 100;
    }
}
void FillRand(vector<double> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = (rand() % 100) / (rand() % 8 + 2);
    }
}
