#include <iostream>
#include <vector>

using namespace std;

// int findDuplicate(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             int idx = abs(nums[i]);
//             if (nums[idx] < 0) return idx;
//             nums[idx] *= -1;
//         }
//         return 0;
//     }
    
int findDuplicate(vector<int>& nums) {
    
    int pslow , pfast;
    pslow = 0;
    pfast = 0;
    
    while(true)
    { //detecting the cycle
        pslow = nums[pslow];
        pfast = nums[nums[pfast]];
        if(pslow == pfast)
            break;
    }
    
    pfast = 0;
    while(pfast!= pslow){
        pslow = nums[pslow];
        pfast = nums[pfast];
    }
        return pfast;
}


int main()
{
    vector<int> dupArr;

    dupArr.push_back(1);
    dupArr.push_back(3);
    dupArr.push_back(4);
    dupArr.push_back(3);
    dupArr.push_back(2);
    // dupArr.push_back();

    

    cout << "---->>> " << findDuplicate( dupArr ) << endl;

    return 0;
}