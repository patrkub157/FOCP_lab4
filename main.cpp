
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{

    // word - list with lines where word occurs
    map<string, vector<int>> dictionary;

    ifstream input("lorem.txt");

    if (input.is_open())
    {

        string word;
        int line_number = 0;

        while (getline(input, word))
        {
            if (dictionary.find(word) == dictionary.end())
            {                                             // If reached the end of dict without finding a key
                dictionary.insert({word, {line_number}}); // Add word to dictionary and line where it appears
            }
            else
            {
                dictionary[word].push_back(line_number); // Add the line number to the index
            }
            ++line_number;
        }
    }

    string tmp;

    cout << "Choose a word: " << endl;
    cin >> tmp;

    cout << "The word " << tmp << " appears in lines:" << endl;

    for (int i = 0; i < dictionary[tmp].size(); i++)
    {
        cout << dictionary[tmp][i] << endl;
    }

    return 0;
}