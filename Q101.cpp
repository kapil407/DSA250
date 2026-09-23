// Q100. Find first occurrences of a pattern in a string
#include<iostream>
#include<vector>
using namespace std;

int main(){

    string str="abcababdabab";
    string pattern="abd";
    int i=0;
    int j=0;
    string temp="";
    vector<int>ans;
    while(j<str.length()){
        temp+=str[j];
         
        if(temp.length()==pattern.length()&& temp==pattern){
            ans.push_back(i);
           break;
        }
        else if(temp.length()==pattern.length()&& temp!=pattern){
              temp.erase(0,1);
            i++;
        }
      
        j++;
    }
    for(auto val:ans) cout<<val<<" ";
    return 0;
}