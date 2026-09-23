//  Find maximum-frequency element
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>vc{1,2,3,2,4,3,5,3,6,4,7,1};
    unordered_map<int,int>mp;
    for(auto val:vc) mp[val]++;
        int freq=0;
        int value=0;
        for(auto val:mp){
            if(val.second>freq){
                freq=val.second;
                value=val.first;
            }
        }
        cout<<"max freq-> "<<freq<<" "<<value;
    return 0;
}