#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 45;
    int b = 56;
    /*int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "the numbers are swapped using third variable:" << a << " " << b;
    */

    /*a = a +  b;
    b = a- b;
    a = a - b;
    cout << "the numbers are swapped using addition and subtraction:" << a << "  " << b;
   */

   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
   cout << "the numbers are swapped using xor:" << a << " " << b;
   

}