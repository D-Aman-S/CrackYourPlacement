#include <bits/stdc++.h>
using namespace std;
//first solution greedy
class Solution {
public:

    int maxProfit(vector<int>& p) {
        int n = p.size();
        int start = p[0];
        int ans =0;
        for(int i=1;i<n;i++){
            if(start<p[i]){
                ans+=(p[i]-start);
            }
            start=p[i];
        }
        return ans;
    }
};

//second solution -  picking positive slopes, ALTHOUGH SAME APPROACH BUT DFFERENT VISUALIZATION
class Solution {
public:

    int maxProfit(vector<int>& p) {
        int n = p.size();
        int start = p[0];
        int ans =0;
        for(int i=1;i<n;i++){
            if(start<p[i]){
                ans+=(p[i]-start);
            }
            start=p[i];
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}