/*
    Link : https://leetcode.com/problems/number-of-1-bits/
    Q :    Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).


    Slution :
    n & (n - 1) drops the lowest set bit. It's a neat little bit trick.

Let's use n = 00101100 as an example. This binary representation has three 1s.

If n = 00101100, then n - 1 = 00101011, so n & (n - 1) = 00101100 & 00101011 = 00101000. Count = 1.

If n = 00101000, then n - 1 = 00100111, so n & (n - 1) = 00101000 & 00100111 = 00100000. Count = 2.

If n = 00100000, then n - 1 = 00011111, so n & (n - 1) = 00100000 & 00011111 = 00000000. Count = 3.

n is now zero, so the while loop ends, and the final count (the numbers of set bits) is returned.

*/


#include <iostream>
using namespace std;

int findsetbits(int num)
{
    int cnt=0;
    while(num)
    {
        num = num & (num-1);
        cnt++;
    }
    return cnt;
}

int main()
{

    int num = 0x0E;
    int setbits = findsetbits(num);
    cout << "--->>> " << setbits << endl;
    return 0;
}