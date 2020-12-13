#include <iostream>
using namespace std;

int main()
{
    int *arr;
    arr = new int[20];

    cout<<"Hello WOrld\n\n";
    for(int i =0; i < 5; i++)
        cin>>arr[i];

    for(int j =0; j < 20; j++)
        cout<<arr[j] << ", ";

    return 0;
}