// Q128. Find Kth smallest element using sorting
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    vector<int>arr{7,10,4,3,20,15};
        int k=3;
    sort(arr.begin(),arr.end());
    cout<<arr[k-1];
    return 0;
}