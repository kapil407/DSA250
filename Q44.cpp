// Find all pairs with a given sum

#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>arr{4,6,7,8,9,11,16};
    int target=15;
    unordered_map<int,int>mp;
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        if(mp.find(target-arr[i])!=mp.end()){
            ans.push_back({arr[i],target-arr[i]});
           
        }
        else
        mp[arr[i]]++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}