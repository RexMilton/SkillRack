#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x,f=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){ x*=2; f=0; }
    }
    (f)? cout<<"0" : cout<<x;
}