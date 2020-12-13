/*
    Write code to reverse a C-Style String.
    (C-String means that “abcd” is represented as five characters, including the null character.)

*/

#include <iostream>
#include <cstring>
using namespace std;

void swap( char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;

}

void reverseString(char *s)
{
    int len = strlen(s);

    for(int i=0, j= len-1; i < j ; i++, j-- )
    {
        swap(&s[i], &s[j]);
    }

    
}


int main()
{
    char str[] = "vivek yadav";

    reverseString(str);

    cout <<"\n" << str << endl;

    return 0;
}

/*
x ^ 0s = x;         x & 0s = 0;         x | 0s = x;
x ^ 1s = ~x;        x & 1s = x;         x | 1s = 1;
x ^ x = 0;          x & x  = x;         x | x  = x;




*/