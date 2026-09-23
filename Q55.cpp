// Find smallest subarray with sum greater than X
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int> arr={1,4,45,1,0,19};
    int  X=51;
    int mini=INT_MAX;
    int i=0;
    int j=0;
    int sum=0;
    while (j<arr.size()){   
        sum+=arr[j];
        
         if(sum>X){
            while(sum>X){
            sum-=arr[i];
            i++;
            }
        }
      
        else if(sum<X) {
            j++;
        }
          if(sum==X){
            
                mini=min(mini,j-i+1);

             
             j++;
        }
    }
    cout<<mini;
    
    return 0;
}