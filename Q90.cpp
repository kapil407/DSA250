// Q90. Check if string follows a pattern
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s="abba";
    string str="dog cat cat dog";
     int i=0;
     int j=0;
     unordered_map<char,string>mp;
     while(i<s.length()){
        string temp="";
        while(j<str.length()  && str[j]!=' '){
            temp+=str[j];
            j++;
        }   
        if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=temp){
                    cout<<"not follow given pattern ";
                    return 0;
                }
        }
        else {
            mp[s[i]]=temp;
        }
        j++;
        i++;
     }
     cout<<"follow patttern";
    
    return 0;
}