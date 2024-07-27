#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        
        sort(a.begin(),a.end());
        // for(auto x:a)cout<<x<<" "<<endl;
        long long ans = INT_MAX;
        for(int i=m-1;i<n;i++){
            // cout<<a[i]<<" "<<a[i-m+1]<<endl;
            ans = min(ans, a[i] - a[i-m+1]);
        }
        return ans;
        
        
    }   
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}