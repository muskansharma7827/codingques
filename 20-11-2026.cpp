#include<bits/stdc++.h>
using namespace std;
void checkPrime(int n){
    if(n < 2){
        cout << "not prime";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            cout << "not prime";
            return;
        }
    }
    cout << "prime";
    return;
}
int main(){
    int n;
    cin >> n;
    checkPrime(n);
    return 0;
}
