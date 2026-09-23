// Q89. Check if two strings are isomorphic
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    string str1="egg";
    string str2="acc";
    unordered_map<char,char>m1;
      unordered_map<char,char>m2;


   
     if(str1.length()!=str2.length()){
        cout<<"not isomorphic";
        return 0;
     }
     for(int i=0;i<str1.length();i++){
        if(m1.find(str1[i])!=m1.end()){
            if(m1[str1[i]]!=str2[i]){
                cout<<"not isomorphic ";
                return 0;
            }
        }
        if(m2.find(str2[i])!=m2.end()){
            if(m2[str2[i]]!=str1[i]){
                cout<<"not  siomorphic";
                return 0;
            }
        }
        m1[str1[i]]=str2[i];
        m2[str2[i]]=str1[i];
     }
     cout<<"isomorphic string ";
    
   
    return 0;
}