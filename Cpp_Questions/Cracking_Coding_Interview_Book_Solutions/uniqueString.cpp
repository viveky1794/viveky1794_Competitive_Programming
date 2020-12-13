/*
   Q.1  Implement an algorithm to determine if a string has all unique characters.
        What if you can not use additional data structures?

*/




#include <iostream>
using namespace std;

/* Method_1 */

int isStringUnique(string s)
{
    int cnt=0;

    for(int i=0; i < s.length(); i++)
    {
        int val = s[i] - 'a';

        if( ( cnt & (1 << val ) ) > 0 ) return false;

        cnt |= ( 1 << val );
    }

    return true;
}



int main()
{
    string str_1 = string("vivek");
    string str_2 = string("abcd");

    cout << "\nstr_1 : " << isStringUnique(str_1) << endl;
    cout << "\nstr_2 : " << isStringUnique(str_2) << endl;

    return 0;
}