#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();  
        int lo=0,mid=0,hi=n-1;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo++],nums[mid++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[hi--],nums[mid]);
            }
        }
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}