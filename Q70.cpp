// Q70. Count vowels and consonants
#include<iostream>
using namespace std;

int main(){
    string str="amanaplanacanalpanama";
    int i=0;
    int Vowels=0;
    int Consonants=0;
    while(i<str.length()){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='i'){
            Vowels++;
        }
        else Consonants++;
        i++;
    }
    cout<<"Vowels is "<<Vowels<<endl<<"consonants "<<Consonants;
    return 0;
}