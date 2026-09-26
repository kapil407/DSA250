// Q132. Find intersection after sorting

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main(){

    vector<int>arr1{1,4,7,8,5,2,4};
    vector<int>arr2{7,8,9,4,5,6,1,2,3,7,3};
    unordered_map<int,int>mp;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    vector<int>ans;
    
    for(auto val:arr2){
        mp[val]++;
    }

    for(int i=0;i<arr1.size();i++){
        if(mp.find(arr1[i])!=mp.end()){
            ans.push_back(arr1[i]);
            mp[arr1[i]]--;
            if(mp[arr1[i]]==0){
                mp.erase(arr1[i]);
            }
        }
    }
    for(auto val:ans) cout<<val<<" ";

    return 0;
}