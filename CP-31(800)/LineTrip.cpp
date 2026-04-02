#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
            int max1=v[0];
            for(int i=0;i<n-1;i++){
                max1=max(max1,v[i+1]-v[i]);
            }
            max1=max(max1,2*(x-v[n-1]));
            cout<<max1<<endl;
    }
}
