#include <bits/stdc++.h>
using namespace std;
//first solution
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int  n =  nums.size();
        vector<int> v(n,0);
        v[0]=1;
        for(int i=0;i<n-1;i++){
            if(v[i]==1){
                for(int j = i;j<=min(i+nums[i],n-1);j++){
                    v[j]=1;
                }
            }
            if(v[n-1]==1)return true;          
        }       
        return v[n-1];
    }
};

// optimized solution
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int  n =  nums.size();
        int mxr = 0; //max reach
        for(int i=0;i<n-1;i++){
           if(i<=mxr){
            mxr = max(mxr,i+nums[i]);
           }
           if(mxr>=n-1)return true;          
        }       
        return   mxr>=n-1?true:false;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}