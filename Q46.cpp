//  Find longest subarray with given sum — positive numbers
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr ={1, 2, 3, 7, 5, 2, 1, 4, 3};
          
    int target = 12;
    int len=INT_MIN;
    
   int i=0;
    int j=0;
    int sum=0;
    int f=-1;
    int l=-1;
    while(j<arr.size()){
        sum+=arr[j];
        while(sum>target){
            sum-=arr[i];
            i++;
        }
        if(sum==target && len < (j-i+1)){
            len=j-i+1;
            f=i;
            l=j;
            
        }   
        j++;
    }
    cout<<"length is : "<<len<<endl;
    for(int i=f;i<=l;i++) cout<<arr[i]<<" ";



    return 0;
}