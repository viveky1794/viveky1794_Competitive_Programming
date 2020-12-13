
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int A=31; // 0001 1111
    int B=14;//  0000 1110
    int C=0;
    int cnt=0;
    // C = 0001 0001 & 1
    // C = 0000 1000 & 1

    for( int C = A^B; C != 0; C = C>>1 )
        cnt += C & 1; 
    cout << "\ncnt : " << cnt << endl;

    return 0;
}