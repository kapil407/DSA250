// Find intersection of two arrays

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 int main(){
    vector<int>A{0,1,4,7,8,5,2};
    vector<int>B{9,6,3,0,2,5,8};
    vector<int>result;
    unordered_map<int,int>mp;
    for(auto val:A){
        mp[val]++;
    }
    for(int i=0;i<B.size();i++){
        if(mp.find(B[i])!=mp.end()){
            result.push_back(B[i]);
        }
    }
    for(auto val:result) cout<<val<<" ";
    return 0;
 }

