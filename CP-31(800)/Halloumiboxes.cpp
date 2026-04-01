#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else{
            bool flag=true;
            for(int i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    flag=false;
                    break;
                }
            }
            if(!flag){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

}