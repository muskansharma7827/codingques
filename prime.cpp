#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
     cin >> num;
     bool prime;
     if(num < 2){
        prime = false;
     }
     for(int i=2;i<num;i++){
     if(num%i == 0){
        prime = false;
        break;
     }
     }
     if(prime == true){
        cout << "the number is a prime number:";
     }
     else{
        cout << "the number is not a prime number:";

     }
}