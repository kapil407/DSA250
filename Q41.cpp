// 41. Find pair with minimum difference

#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{10,3,20,7,15};
    int first=0;
    int second=0;
    sort(arr.begin(),arr.end());
        int minDif=INT_MAX;
        int diff=0;
        for(int i=0;i<arr.size()-1;i++){
                diff=abs(arr[i+1]-arr[i]);
                minDif=min(diff,minDif);
        }
       
        for(int i=0;i<arr.size()-1;i++){
            if(minDif==(arr[i+1]-arr[i])){
                first=arr[i];
                second=arr[i+1];
                break;
            }
        }
        cout<<"pais is : "<<"{ "<<first<<","<<second<<" }";
    
    return 0;
}