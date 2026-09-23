// find longest subarray containing only 1's

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){

    vector<int>arr{0,0,1,1,0,1,1,1,1,1,1,0,1,0,1,0,1,0};
    int cnt=0;
    int f=-1;
    int l=-1;
    int j=0;
    int i=0;
    int maxCnt=INT_MIN;
    while(j<arr.size()){
        if(arr[j]==1){
            i=j;
            while(arr[j]==1){
                cnt++;
                j++;
            }
            if(cnt>maxCnt){
                maxCnt=cnt;
                f=i;
                l=j-1;
                // cout<<"f-> "<<f<<endl<<"l-> "<<l<<endl;
                cnt=0;
            }
        }
        else
        j++;
    }
    cout<<"i-> "<<f<<endl<<"j-> "<<l<<endl;
    vector<int>ans;
    for(int i=f;i<l;i++) ans.push_back(arr[i]);
    for(auto val:ans) cout<<val<<" ";
    return 0;
}
