#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct
{
    int number;
    double area;
    string facultet;
    int numResidents;
} room;
int main()
{
    vector <room> rooms{{4,23,"Physics",3},{3,50,"History",4},{2,30,"Economy",5},{1,75,"Physics",10}};
    vector <string> facultets;

    for (auto room : rooms)
    {
        if (find(facultets.begin(),facultets.end(),room.facultet)==facultets.end())
        {
            facultets.push_back(room.facultet);
        }
    }

    cout << "Facultet" << "\t" << "Number of rooms" << "\t\t" << "Number of student" << "\t" << "Average area for one student" << "\n";
    for (auto facultet : facultets )
    {
        int nRooms = 0;
        int nStudent = 0;
        double averageAreaForOneStudent = 0;

        for (auto room : rooms)
        {
            if (facultet==room.facultet)
            {
                nRooms++;
                nStudent+=room.numResidents;
                averageAreaForOneStudent+=room.area;
            }
        }
        cout << facultet << "\t\t\t" << nRooms << "\t\t\t" << nStudent << "\t\t\t" << averageAreaForOneStudent/nStudent << "\n"; 
        
    }
}