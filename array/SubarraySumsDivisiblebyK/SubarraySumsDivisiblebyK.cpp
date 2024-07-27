#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n  = nums.size();
        unordered_map<int,int> mp;
        vector<int> pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i] = pref[i-1] + nums[i-1];
        }
        int c = 0;
        for(int i=0;i<=n;i++){
            int d = ((pref[i]%k)+k)%k; // please dont forget it again
            if(mp.find(d)!=mp.end()){
                c+=mp[d];
            }
            mp[d]++;
        }
        return c;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}