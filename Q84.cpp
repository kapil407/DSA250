// Q84. Find character with maximum frequency
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="banana";
    vector<int>temp(26,0);
    for(auto val:str){
        temp[val-97]++;
    }
    int cnt=0;
    char ch;
    for(int i=0;i<temp.size();i++){
        if(cnt<temp[i]){
            cnt=temp[i];
            ch=(char)i+97;
        }
    }
    cout<<"character:"<<ch<<endl<<"max Frequency "<<cnt;
    return 0;
}