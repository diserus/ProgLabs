#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
    int numberOfSchool;
    int numberOfGraduates;
    int numberOfUniver;
    double procent;
} school;

void indexSort(const vector <school> &schools, vector <int> &indexArr)
{
    for (int i = 0; i < schools.size(); i++)
    {
        for (int j = 0; j < schools.size() - i - 1; ++j) 
        {
           
            if (schools[indexArr[j]].procent>schools[indexArr[j+1]].procent)
            {
                swap(indexArr[j],indexArr[j+1]);
                
            }
        }
    }
}

int main()
{
    vector <school> schools;
    schools.push_back({34,50,40});
    schools.push_back({80,30,15});
    schools.push_back({15,80,57});
    for (int i = 0; i<schools.size();i++)
    {
        schools[i].procent= (double)schools[i].numberOfUniver/(double)schools[i].numberOfGraduates*100;
    }
    vector <int> indexArr;
    for (int i = 0; i< schools.size();i++)
        indexArr.push_back(i);
    indexSort(schools,indexArr);
    for (int i = 0; i<schools.size();i++)
    {
        cout << "Number of school: "<<schools[indexArr[i]].numberOfSchool << "\n" 
        << "Number of graduates: " <<schools[indexArr[i]].numberOfGraduates << "\n" 
        << "Number of applicants to the university: " << schools[indexArr[i]].numberOfUniver << "\n"
        << "Procent of applicants: " << schools[indexArr[i]].procent <<"\n\n";
    }
    return 0;
}