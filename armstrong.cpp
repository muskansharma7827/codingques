#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >>  num;
    int digits;
    int arm = 0;
    int original = num;
    while(num > 0){
        digits = num % 10;
        arm = arm + (digits*digits*digits);
        num = num / 10;
    }
    if(original == arm){
        cout << "the number is an armstrong number";
    }
    else{
        cout << "the number is not an armstrong number";
    }
    return 0;
}