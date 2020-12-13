#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

    /* My Method : 1, Not so optimized */
    /*
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
*/

int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }

int main()
{
    string s = "pwwkew";

    cout<< "\n\n---->>>> " << lengthOfLongestSubstring(s)<< endl;

 return 0;
}