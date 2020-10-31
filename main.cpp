#include <iostream>
#include <vector>
#include <array>

using namespace std;

void print_contents(vector<int> &input)
{
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << endl;
    }
}

int main()
{

    int size;

    cout << "Provide a size for your array: " << endl;
    cin >> size;

    vector<int> numbers;

    for (int i = 0; i < size; i++)
    {
        numbers.push_back(i);
    }

    print_contents(numbers);

    return 0;
}