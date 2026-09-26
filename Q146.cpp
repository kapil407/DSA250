// find ceil value of an element

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{1,4,7,9};
    int x=6;
    int i=0;
    int idx=-1;
    int j=arr.size()-1;
    while(i<=j){
        int md=i+(j-i)/2;
        if(arr[md]>=x){
            idx=md;
            j=md-1;

        }
        else i=md+1;
    }
    cout<<"ceil position is : "<<idx<<" and ceil value is  : "<<arr[idx];
    return 0;
}