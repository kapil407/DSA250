// Find Maximum Consecutive 1s

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,1,0,1,1,1,1,0,1};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            cnt++;
        }
        else {
            maxi=max(maxi,cnt);
            cnt=0;
        }
    }
    cout<<"maxi->> "<<maxi;
    return 0;
}