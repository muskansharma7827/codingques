#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 50;
    int b = 10000;
    cout << "the values of a and b before swapping : " << a << " " << b   ;
    a = a + b;   // 30
    b = a-b;         // 30 - 20 = 10 i.e. a-b = b
    a = a - b;    // 30-10=20


    cout << "the values of a and b after swapping : " << a << " " << b  ;
    return 0;

} //Note: with very large integers, addition can overflow.