#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    int x;
    int k,l;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> x;
            if(x == 1){
                k = i;
                l = j;
            }
        }
    }

    cout << abs(k - 2) + abs(l - 2) << endl;

    return 0;
}