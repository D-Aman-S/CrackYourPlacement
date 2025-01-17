#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m + n-1,i=m-1,j=n-1;
        while(k>=0 and i>=0 and j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--]; 
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(k>=0 and j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}