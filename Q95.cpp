// Q95. Check if one string is a subsequence of another
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s1="abct";
    string s2="abct";
    int j=0;
   if(s2.length()>=s1.length()){
    for(int i=0;i<s2.length();i++){
        if(s2[i]==s1[j]){
            j++;
         }
        }
        if(j>=s1.length()){
            cout<<"subsequyuenece";
            return 0;
        }
        else cout<<"not ";
    }
    else {
        for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[j]){
            j++;
         }
        }
        if(j>=s2.length()){
            cout<<"subsequyuenece";
            return 0;
        }
        else cout<<"not ";
    }

    return 0;
}