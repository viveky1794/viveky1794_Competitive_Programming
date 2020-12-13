

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


void showBinary(int num)
{
    for(int i=31; i >=0; i--)
    {
        int m = ( num >> i ) & 1;
        cout << m << " ";
    }
    cout<<endl;
}


int main()
{
    int h=6, l=1;
    int num=0;
    int cnt=8;
    int i=6, j=2;
    int max = ~0; /* All 1’s */

 // 1’s through position j, then 0’s
 int left = max - ((1 << j) - 1);

 // 1’s after position i
 int right = ((1 << i) - 1);

 // 1’s, with 0s between i and j
 int mask = left | right;

    showBinary( left );
    showBinary( right );
    showBinary( mask );
   

    cout<<endl;
    return 0;
}