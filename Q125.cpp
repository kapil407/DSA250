// Q125. Sort strings alphabetically
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 class Comparator {
    public:
    bool operator()(string c1,string c2){
        return c1 < c2;
    }
};

int main(){

    vector<string>arr{"banana","apple","cat"};
     sort(arr.begin(),arr.end(),Comparator());
     for(auto val:arr) cout<<val<<" ";

    return 0;
}