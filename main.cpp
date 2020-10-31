#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int variable = 8;
    int *ptr;
    ptr = &variable;
    *ptr = 25;
    cout << variable;
    return 0;
}