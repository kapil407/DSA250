// find pair equal to target // two Sum
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int>arr = {2, 7, 11, 15};
        int target = 9;
    unordered_map<int,int>mp;
    int f=0;
    int s=0;
    for(int i=0;i<arr.size();i++){
        if(mp.find(target-arr[i])!=mp.end()){
            f=arr[i];
            s=target-arr[i];
            break;
        }
        mp[arr[i]]++;
    } 
    cout<<"pair is : "<<f<<" "<<s;
    return 0;
}