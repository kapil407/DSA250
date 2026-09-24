// Q126. Sort array according to frequency
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Comparator{

    public:
    bool operator()(pair<int,int> v1,pair<int,int> v2){
        return v1.second>v2.second;
    }
};

int main(){
    vector<int>arr{1,3,3,2,2,2};
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    vector<pair<int,int>>ans;
    for(auto val:mp){
        ans.push_back({val.first,val.second});
    }
    sort(ans.begin(),ans.end(),Comparator());
    for(auto val:ans) cout<<val.first<<"->"<<val.second<<endl;
    return 0;
}