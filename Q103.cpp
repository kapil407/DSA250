// Q103. Find longest common prefix
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string>str={"flower","flow","floght","float"};
    string temp=str[0];
    for(int i=1;i<str.size();i++){
        int j=0;
        string temp1="";
        while(j<temp.length() && j<str[i].length()){
            if(temp[j]==str[i][j]){
                temp1+=temp[j];
                j++;
            }
            else break;
        }
        temp=temp1;
    }
    cout<<temp;
    return 0;
}