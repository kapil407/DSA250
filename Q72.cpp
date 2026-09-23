// Q72. Count frequency of each character
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="asdfghawesdfasdfrasdfwert";
    vector<int>ans(26,0);
    for(int i=0;i<str.length();i++){
        ans[str[i]-97]++;
    }
   for(int i=0;i<ans.size();i++){
    if(ans[i]!=0)
    cout<<(char)(97+i)<<" : "<<ans[i]<<endl;
   }
    return 0;
}