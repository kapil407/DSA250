//  Find contiguous subarray with equal 0s and 1s
#include<iostream>
#include<vector>
#include<limits.h>
#include<unordered_map>
using namespace std;



int main(){
    // vector<int>arr{1,1,0,1,0,1,1,0,1,0,1,0,1,1,1};
        vector<int>arr{1,1};
   
    int j=0;
    // int i=0;
    int f=-1;
    int l=-1;
    int len=0;
    int maxi=INT_MIN;
    int balance=0;
    
    unordered_map<int,int>mp;
    mp[0]=-1;
    while (j<arr.size()){

         if(arr[j]==1) balance++;
         else balance--;
          
        if(mp.find(balance)!=mp.end()){
            int i=mp[balance];
            len=j-i;
            if(len>maxi){
                f=i+1;
                l=j;

            }
           
        }
        else{
            mp[balance]=j;
        }
       
         
        
        j++;
    }
    cout<<"first ->>"<<f<<endl<<"last "<<l<<endl;
    if(f==-1 || l==-1) { cout<<"no valid subarray "<<endl;
    return 0;
    }
    for(int i=f;i<=l;i++) cout<<arr[i]<<" ";
    
    return 0;
}