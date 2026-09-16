#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int digit;
    int sum = 0;
    while(num > 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "the sum of digits of a number:" << sum;
    return 0;



}