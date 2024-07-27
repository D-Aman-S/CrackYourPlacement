#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i] = pref[i-1] + nums[i-1];
        }
        unordered_map<int,int> mp;
        int sum = 0;
        for(int i=0;i<=n;i++){
            if(mp.find(pref[i]-k)!=mp.end()){
                sum+= mp[pref[i]-k];
            }
            mp[pref[i]]++;
        }
        return sum;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}