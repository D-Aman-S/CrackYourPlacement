#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr= 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                nums[curr+1]=nums[i];
                curr++;
            }
        }
        return curr+1;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}