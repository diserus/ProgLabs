#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    vector <string> lines;
    
    ifstream file;
    file.open("main.txt");
    if (!file.is_open()) 
        return 1;
    while (getline(file, line))
        lines.push_back(line);
    file.close();
    
    vector <string> words;
    for (string line : lines) 
    {
        int start = 0;
        int end = line.find(' ');

        while (end != string::npos) 
        {
            string word = line.substr(start, end - start);
            if (!word.empty()) 
                words.push_back(word);
            start = end + 1;
            end = line.find(' ', start);
        }

    string lastWord = line.substr(start);
    if (!lastWord.empty()) 
        words.push_back(lastWord);
    }
    
    sort(words.begin(),words.end());
    
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) 
        return 1;
    for (const auto &word : words) 
        outputFile << word << ' ';
    outputFile.close();
    return 0;
}