#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = -123;
    if(num < 0){
        cout << "the number is not pallindrome";
        return 0;
    }
    int rev = 0;
    int digit;
    int original = num;

    while(num > 0){
    digit = num % 10;
    rev = (rev*10) + digit;
    num = num/10;
    }

    if(original == rev){
        cout << "the number is pallindrome";
    }
    else{
        cout << "the number is not pallindrome";
    }
    return 0;
}