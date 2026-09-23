// Find leaders in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{16,17,4,3,5,2};
    vector<int>ans;
    int i=arr.size()-2;
    ans.push_back(arr[arr.size()-1]);
    int leaderE=arr[arr.size()-1];
    while(i>=0){
        if(leaderE<arr[i]){
            leaderE=arr[i];
            ans.push_back(arr[i]);
        }
        i--;
    }
    reverse(ans.begin(),ans.end());
    for(auto val:ans) cout<<val<<" ";
    return 0;
}