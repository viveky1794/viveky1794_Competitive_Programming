#include <iostream>
using namespace std;

int isStringUnique(string s)
{
    int cnt=0;

    for(int i=0; i < s.length(); i++)
    {
        int val = s[i] - 'a';

        if( ( cnt & (1 << val ) ) > 0 ) return 0;

        cnt |= ( 1 << val );
    }

    return 1;
}



int main()
{
    string str_1 = string("vivek");
    string str_2 = string("abcd");

    cout << "\nstr_1 : " << isStringUnique(str_1) << endl;
    cout << "\nstr_2 : " << isStringUnique(str_2) << endl;

    return 0;
}