#include <bits/stdc++.h>
using namespace std;
// first solution
class Solution {
public:
    bool valid(int i, int j, int m, int n){
        return i<m and j<n and i>=0 and j>=0;
    }
    void gameOfLife(vector<vector<int>>& b) {
        int m = b.size();
        int n = b[0].size();
        vector<int> dx = {-1,-1,-1,0,1,1,1,0}, dy = {-1,0,1,1,1,0,-1,-1};
        vector<vector<int>> temp = b;
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                int v = b[i][j];
                int co = 0;
                for(int k=0;k<8;k++){
                    int ni=i+dx[k], nj=j+dy[k];
                    if(valid(ni,nj,m,n)){
                        if(b[ni][nj]==1)co++;
                    }
                }
                if(v==1){
                    if(co<2 or co>3){
                        temp[i][j]=0;
                    }
                }
                else{
                    if(co==3){
                        temp[i][j]=1;
                    }
                }
            }
        }
        b=temp;
    }
};

// inplace O(1) space solution

class Solution {
public:
    bool valid(int i, int j, int m, int n){
        return i<m and j<n and i>=0 and j>=0;
    }
    void gameOfLife(vector<vector<int>>& b) {
        int m = b.size();
        int n = b[0].size();
        vector<int> dx = {-1,-1,-1,0,1,1,1,0}, dy = {-1,0,1,1,1,0,-1,-1};
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                int v = b[i][j] & 1;
                int co = 0;
                for(int k=0;k<8;k++){
                    int ni=i+dx[k], nj=j+dy[k];
                    if(valid(ni,nj,m,n)){
                        if((b[ni][nj]&1)==1)co++;
                    }
                }
                if(v==1){
                    if(co>=2 and co<=3){
                        b[i][j] |=2; 
                    }
                }
                else{
                    if(co==3){
                        b[i][j] |=2; 
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                b[i][j]>>=1;
            }
        }
    }
};


int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}