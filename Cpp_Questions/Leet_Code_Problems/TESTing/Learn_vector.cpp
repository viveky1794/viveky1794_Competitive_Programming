
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr;

    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(3);

    for(int i=0; i < arr.size(); i++)
        cout<< arr[i] << " ";

    return 0;
}

