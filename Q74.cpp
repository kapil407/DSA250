// Q74. Find first repeating character
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="aabbbcd";
    vector<int>ans(26,0);
    for(int i=0;i<str.length();i++){
        ans[str[i]-97]++;
    }
    char result;
    for(int i=0;i<ans.size();i++){
       
        if(ans[i]>1){
            result=(char)(97+i);
            break;
        }
    }
    cout<<"First repeated character "<<result;
    return 0;
}