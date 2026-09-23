// Find maximum average subarray of size K
#include<iostream>
#include<vector>
#include<cfloat>
using namespace std;

int main(){
    vector<int>arr={1,12,-5,-6,50,3};
    int  k=4; 
    float maxAvg=FLT_MIN;
    int i=0;
    int j=0;
    float sum=0;
    while(j<arr.size()){
        sum+=arr[j];
        if((j-i+1)==k){
            maxAvg=max(maxAvg,sum/k);
          
          
        }
        if((j-i+1)<=k) j++;
        else{
              sum-=arr[i];
              maxAvg=max(maxAvg,sum/k);
            i++;
        }
          cout<<maxAvg<<endl;
        
    }
    cout<<"ans->>"<<maxAvg;
    return 0;
}