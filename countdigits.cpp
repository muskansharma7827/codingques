#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int count = 0;
    if(num == 0){
        cout << 1;
        return 0;
    }
     while (num > 0){
        num = num /10;
        count++;
     }
     cout << "the count of digits in a number is :" << count;
     return 0;
     
     
}