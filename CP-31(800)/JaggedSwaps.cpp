#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int> v1=v;
        sort(v1.begin(),v1.end());

        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                swap(v[i],v[i+1]);
            }
        }
        bool sorted=true;
        for(int i=0;i<n;i++){
            if(v[i]!=v1[i]){
                sorted= false;
                break;
            }
        }
        if(sorted || v[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}