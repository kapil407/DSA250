// Q105. Find longest palindromic substring — basic approach
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string findPelindrom(string &str){
   string ans="";
   for(int c=0;c<str.length();c++){
    // checking even length pelinndrom
    int i=c;
    int j=c;
    while(i>=0 && j<str.length()&& str[i]==str[j]){
        if(j-i+1>ans.length()){
            ans=str.substr(i,j);
        }
        i--;
        j++;
    }
    // checking odd length pelindrom 
    i=c;
    j=c+1;
    while(i>=0 && j<str.length() && str[i]==str[j]){
        if(j-i+1>ans.length()){
            ans=str.substr(i,j);
        }
        i--;
        j++;
    }

   }
   return ans;
}

int main(){
    string str="forgeeksskeegdbaabcbaabd";

    string ans;
   ans= findPelindrom(str);
   if (ans.length()==0)
   {
    cout<<"no pelinrom is here ";
    return 0;
   }
   
    cout<<"pelindrom string is : "<<ans<<endl<<ans.length()<<endl<<"time is N^2"<<endl<<"space is N";
    return 0;
}