#include <bits/stdc++.h>
using namespace std;
//long code
class Solution {
public:
    bool valid(int i,int j, int m,int n, vector<vector<bool>>& vis){
        return i>=0 and j>=0 and i<m and j<n and !vis[i][j];
    } 
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int f=0,s=0;
        int c=0;
        bool inc=true, jp=true; //inc denotes we are increasing all params
        //jp denotes j pointer is increeasing 
        bool skip = false;
        while(c<n*m){
            cout<<c<<endl;
            if(!skip){
                vis[f][s]=true;
                ans.push_back(mat[f][s]);
                c++;             
                skip=false;
            }
            
            //increasing
            if(inc){
                //incresing j
                if(jp){
                    if(valid(f,s+1,m,n,vis)){
                        skip=false;
                        s++;
                    }else{
                        jp=!jp;
                        skip=true;
                    }                           
                }
                //increasing i
                else{
                    if(valid(f+1,s,m,n,vis)){
                        skip=false;
                        f++;
                    }else{
                        jp=!jp;
                        inc=!inc;
                        skip=true;
                    }   
                }
            }
            //decreasinh
            else{
                //decresing j
                if(jp){
                    if(valid(f,s-1,m,n,vis)){
                        skip=false;
                        s--;
                    }else{
                        jp=!jp;
                        skip=true;
                    }                           
                }
                //increasing i
                else{
                    if(valid(f-1,s,m,n,vis)){
                        skip=false;
                        f--;
                    }else{
                        jp=!jp;
                        inc=!inc;
                        skip=true;
                    }   
                }
            }
        }
        return ans;
    }
};
//cleaner code
class Solution {
public:
    bool valid(int i,int j, int m,int n, vector<vector<bool>>& vis){
        return i>=0 and j>=0 and i<m and j<n and !vis[i][j];
    } 
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        vector<int> dx = {0,1,0,-1};
        vector<int> dy = {1,0,-1,0};
        int f=0,s=0,c=0,d=0;
        while(c<n*m){
            vis[f][s]=true;
            ans.push_back(mat[f][s]);
            c++;             
            if(valid(f+dx[d],s+dy[d],m,n,vis)){
                f+=dx[d];
                s+=dy[d];
            }
            //changing direction
            else{
                d=(d+1)%4;
                f+=dx[d];
                s+=dy[d];
            }                          
        }
        return ans;
    }
};
int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}