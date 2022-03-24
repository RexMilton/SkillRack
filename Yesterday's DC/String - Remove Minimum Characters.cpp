#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin,s);
    int count=0,l=s.size();
    for(int i=0;i<l-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else i++;
    }
    if((l-count)%2){
        cout<<count+1;
        return 0;
    }
    if(s[l-1]==s[l-2]) count++;
    cout<<count;
}