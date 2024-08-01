#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0,el=0;
        int n = nums.size();
        for(auto& x:nums){
            if(c==0){
                el=x;
                c++;
            }
            else{
                el==x?c++:c--;
            }
        }
        return el;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}