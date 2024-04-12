#pragma once
#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

void BubbleSort(vector<int> &arr);
void SelectSort(vector<int> &arr);
void ShakerSort(vector<int> &arr);
double timer(void (*f)(vector<int> &arr), vector<int> &arr);
void FillRand(vector<int> &arr);
void BubbleSort(vector<double> &arr);
void SelectSort(vector<double> &arr);
void ShakerSort(vector<double> &arr);
double timer(void (*f)(vector<double> &arr), vector<double> &arr);
void FillRand(vector<double> &arr);
