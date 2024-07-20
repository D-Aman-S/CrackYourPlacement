#include <bits/stdc++.h>
using namespace std;
//my first solution
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n =  p.size();
        vector<int> v(n,0);
        v[n-1] = p[n-1];
        for(int i = n-2;i>=0;i--){
            v[i] = max(p[i],v[i+1]);
        }
        int ans = 0;

        for(int i = 0;i<n-1;i++){
            ans = max(ans,  v[i+1] - p[i] );
        }
        return ans;
    }
};

// more optimal one pass solution
class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n =  p.size();
        int mp = p[0];
        int ans = 0;
        for(int i=1;i<n;i++){
            ans = max(ans,p[i]-mp);
            mp = min(mp,p[i]);
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}