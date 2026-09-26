// Q145. Find floor of an element
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,3,5,7};
    int target=6;
        int i=0;
        int idx=-1;
        int j=arr.size()-1;
        while(i<=j){
            int md=i+(j-i)/2;
            if(arr[md]<=target){
                idx=md;
                i=md+1;
            }
            else {
                j=md-1;
            }
        }
        cout<<idx;
    return 0;
}