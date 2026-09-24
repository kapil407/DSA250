// Q131. Merge two sorted arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr1{1,3,5};
    vector<int>arr2{2,4,6};
    int i=0;
    int j=0;
    vector<int>ans;

    while(i<arr1.size()&& j<arr2.size()){
        if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else {
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while(i<arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }
    while (j<arr2.size())
    {
        ans.push_back(arr2[j]);
        j++;
    }
    for(auto val:ans) cout<<val<<" ";
    
}
