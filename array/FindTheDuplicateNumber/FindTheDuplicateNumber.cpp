#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = 0;
        int fast = 0;
        while(true){          
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast==slow)break;
        }
        slow  = 0;
        
        while(true){            
            slow=nums[slow];
            fast=nums[fast];
            if(fast==slow)break;

        }
        return slow;
    }
};

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}