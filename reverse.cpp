#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int digit;
    int rev = 0;

    while(num > 0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10; 
    }
     
    cout << "the reverse of a number is :" << rev;
    return 0;
}