#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,x;
    cin>>s;
    int a,b;
    cin>>a>>b;
    int count=1,l=s.size();
    x=s.substr(l-a)+s.substr(0,l-a);
    // cout<<x;
    while(1){
        if(x==s) break;
        else{
            x=x.substr(l-b)+x.substr(0,l-b);
            count++;
        }
        if(x==s) break;
        else{
            x=x.substr(l-a)+x.substr(0,l-a);
            count++;
        }
    }
    cout<<count;
}