#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int count = 0;
    for(int i=0;i<s1.size();i++){
        
        if(s1[i]=='4' || s1[i]=='7'){
            count++;
            
        }
    }
    if(count==0){
        cout << "NO" << endl;
        return 0;
    }
    while(count!=0){
        int rem = count % 10;
        if(rem != 4 && rem != 7){
            cout << "NO" << endl;
            return 0;
        }
        count /= 10;
    }
    cout << "YES" << endl;
    
    return 0;

}