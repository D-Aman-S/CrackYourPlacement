#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& h) {
        int  n = h.size();
        int lo=0,hi=n-1;
        int ans = INT_MIN;
        while(lo<hi){
            int area = (hi-lo)*(min(h[lo],h[hi]));
            ans = max(area,ans);
            if(h[lo]<h[hi]){
                lo++;
            }
            else hi--;
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}