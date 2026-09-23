// 33. Find maximum product subarray
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr{3,2,-2,4};
    int P=1;
    int maxP=INT_MIN;
    for(int i=0;i<arr.size();i++){
        P*=arr[i];
        if(P<0){
            P=1;
        }
        maxP=max(maxP,P);
    }
    cout<<"maxProduct-> "<<maxP;
    return 0;
}