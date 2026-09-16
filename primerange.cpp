#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    
    for(int n = a;n<=b;n++){
         bool prime = true;
        if(n < 2){
            prime = false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime = false;
                break;
            }
        }
        if(prime == true){
        cout << n << " ";
    }
    }
return 0;
}