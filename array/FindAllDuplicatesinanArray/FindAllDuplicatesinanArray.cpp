#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int in = nums[i];
            int val = nums[abs(in)-1];
            if(val<0){

                ans.push_back(abs(in));
               
            }
            
            nums[abs(in)-1]*=-1;
        }
        return ans;
    }
};


int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}