#include <iostream>
#include <string>
#include <cstring>
using namespace std;




   bool checkduplicate(string s, int start,  int end)
    {
        
        for(int i=start; i < end; i++)
        {
            if(s[i] == s[end] ) return 1;
        }
        
        return 0;
    }
        
    int lengthOfLongestSubstring(string s) {
 
        int cnt=0;
        int max=0;
        char arr[26];
        memset(arr,0,26);
        
        for(int i=0; i < s.length(); i++)
        {   cnt=0;
            for(int j=i; j < s.length(); j++)    
            {
                if( checkduplicate(s, i, j) ) break;
                else cnt++;
                
            }
        
          if(max < cnt) max = cnt;   
        }        
        return max;
    }


int main()
{
    string s = "pwwkew";

    cout<< "\n\n---->>>> " << lengthOfLongestSubstring(s)<< endl;

 return 0;
}