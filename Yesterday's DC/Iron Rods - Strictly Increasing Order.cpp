#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int sum=0,temp=v[0];
    for(int i=1;i<n;i++){
        if(v[i]-temp!=1){
            sum+=(v[i]-(temp+1));
            v[i]=temp+1;
        } 
        // cout<<sum<<endl;
        temp=v[i];
    }
    temp++;
    while(sum>=temp){
        v.push_back(temp);
        sum-=temp;
        temp++;
    }
    for(int i=0;i<v.size();i++){
        printf("%d ",v[i]);
    }
}