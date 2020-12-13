#include <iostream>
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

int swapOddEvenBits(int x)
 {
     return ( ((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1) );
 }

int main()
{
    int A = 106;
    showBinary( A );
    showBinary( swapOddEvenBits( A) );
    
return 0;
}