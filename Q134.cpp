// Q134. Find minimum difference between array elements
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int>arr{10,1,7,4};
    int f_min=INT_MAX;
    int s_min=INT_MAX;

    for(int i=0;i<arr.size();i++){
        if(f_min>arr[i]){
            s_min=f_min;
            f_min=arr[i];
        }
        else if(s_min >arr[i] && f_min!=arr[i]){
            s_min=arr[i];
        }
    }
    cout<<"first "<<f_min<<endl<<"second " <<s_min;
    cout<<endl<<"smallest diff is : "<<(s_min-f_min);
    return 0;
}