#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int fact = 1;
    if(num ==0){
        cout << 1;
    }
    for(int i =0;i<num;i++){
        fact = fact * num;
        num--;

    }


}