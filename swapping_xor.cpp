#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    
    cout << "the values of a and b before swapping : " << a << " " << b  ;
    
     a = a^b;
     b = a^b;
     a = a^b;
    cout << "the values of a and b after swapping : " << a << " " << b  ;
     
    // a = a ^ b
    // b = a ^ b  ==>  b= (a^b)^b = a^b^b = a^0 = a
    // a = a ^ b ==> a = (a^b)^a = a^a^b = 0^b = b




    return 0;
}