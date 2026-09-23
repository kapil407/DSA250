// find max elemnt in every window of size k 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
        vector<int>arr{1, 22, 13, 2, 8, -9, 18, 12, 86};
            int k=3;
          int i=0;
          int j=0;
          vector<int>ans;
          while(j<arr.size()){
                if((j-i+1)==k){
                    int x=i;
                    int maxi=INT_MIN;
                    while(x<=j){
                        if(maxi<arr[x]){
                            maxi=arr[x];
                        }
                        x++;
                    }
                    ans.push_back(maxi);
                    i++;
                }
                j++;
          }  
          for(auto val:ans) cout<<val<<" ";

    return 0;

}