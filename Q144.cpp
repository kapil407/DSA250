// Q144. Find insertion position
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{1,3,5,7};
    int x=7;
    int i=0;
    int j=arr.size()-1;
    int idx=-1;
    if(arr[0]==x){
        idx=0;
        cout<<idx;
        return 0;
    }
    if(arr[j]==x){
        idx=j-1;
        cout<<idx;
        return 0;
    }

    while (i<=j){
    
        int md=i+(j-i)/2;
        if(md-1>=0 && md+1<arr.size() && arr[md-1]<=x && arr[md+1]>x){
            idx=md+1;
            break;
        }
        if(arr[md]<x){
            i++;
        }
        else j--;
    }
    cout<<idx;
    
    return 0;
}