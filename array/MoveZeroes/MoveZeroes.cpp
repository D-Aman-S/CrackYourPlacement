#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cur = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[cur]);
                cur++;
            }
        }
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}