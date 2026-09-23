// Q67. Reverse words in a string
#include<iostream>
using namespace std;

int main(){
    string str="I love coding";
    string ans="";
    int i=str.length()-1;
    while(i>=0){
        string temp="";
        while(i>=0 && str[i]!=' '){
                temp=str[i]+temp;
                i--;
        }
        if(temp!=" ")
        ans+=temp+" ";
        i--;
    }
   
    ans.erase(ans.length()-1,1);
     
    cout<<ans;
   
    return 0;
}