// Q127. Sort array according to absolute difference from X
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Comparator{
    public:
    bool operator()(pair<int,int>p1,pair<int,int>p2){
        return p1.second <p2.second;
    }
};

int main(){
    vector<int>arr{10,5,3,9};
    int X=7;
    vector<pair<int,int>>temp;
    for(auto val:arr){
        temp.push_back({val,abs(val-X)});
    }
    for(auto val:temp) cout<<val.first<<"->"<<val.second<<endl;
    sort(temp.begin(),temp.end(),Comparator());
     for(auto val:temp) cout<<val.first<<"->"<<val.second<<endl;
    return 0;
}