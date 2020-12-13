#include <iostream>
using namespace std;

#define set_range(num ,l,h) num = ( num | (  ( ( 1 << ( h + 1 ) ) - 1 ) & ( ~ ( ( 1 << l ) - 1 ) )  ) )

void showBinary(int num)
{
    for(int i=31; i >=0; i--)
    {
        int m = ( num >> i ) & 1;
        cout << m << " ";
    }
    cout<<endl;
}

int hamming(int a, int b)
{
    return __builtin_popcount(a^b);
}



int main()
{

    int a = 50, b = -50;
    int h=6, l=1;

    showBinary(a);
    // set_range(a,l,h);
    showBinary(b);

    cout<< "\nhamming coutn : " << hamming(a,b) << endl;

    return 0;
}
