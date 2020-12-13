

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


int myAtoi(string s) {
        
        if( !s.length() ) return 0;
        
        int sum=0, negativeflag=1;
        int flag = 1;
        for(int i=0; i < s.length(); i++)
        {
            if( s[i] == ' ') continue; // Whitespace
            else if( s[i] == '-') negativeflag = -1; // negative
            else if( s[i] == '.') flag = 0; 
            else if( (s[i])>= '0' && (s[i])<= '9' ) // digit
            {
                if( flag )
                    sum = sum*10 + s[i]-48;
                else{

                }
            }
            else{
              if( sum == 0) return 0;// Otherwise return with zero , don;t check                  
            } 
        }
        
        
        return sum*negativeflag;
    }

    int main()
    {
        string s = " -10.12 with words";

        cout << "\n\n\n--->>> " << myAtoi(s) << "\n\n\n";


        return 0;
    }