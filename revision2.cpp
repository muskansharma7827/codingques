#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int a = 100;
    int b = 50;
    
    int temp;
    //logic
    temp = a ;
    a = b;
    b = temp;
    cout << "the values of variables after swapping using third variable:" << a << " " << b;
    */
     /*
    a = a + b;   // a=150;b=50
    b = a- b;    // b=100
    a = a - b;   // a = 150 - 100=50
    cout << "the values of variables after swapping using addition and subtrcation:" << a << " " << b;
     */
     /*
     a = a ^ b;
     b = a ^ b;   // b= (a^b)^b=a^b^b=a^0=a
     a = a ^ b;   // a=a^b^a=a^a^b=0^b=b
     cout << "the values of varibles using xor:" << a << " " << b;
     */
     /*
     int num = -123;
     int rev = 0;
     int digit;
     int original = num;
     //logic
     if(num < 0){
     cout << "the number is not pallindrome.";
     return 0;
    }
     while(num > 0){
     digit = num % 10;
     rev = (rev*10) + digit;
     num = num / 10;
     }
     if(original == rev){
        cout << "the number entered is pallindrome.";
     }
     else{
        cout << "the number entered is not pallindrome.";

     }
       
     */
    
     int num = -123;
     int rev = 0;
     int digit;
     bool isnegative = false;
     //logic
     while(num < 0){
        isnegative = true; 
        num = -num;         // num = - (-123) = 123 then go in while loop;get rev which is 321 .

     }
     while(num > 0){
     digit = num % 10;
     rev = (rev*10) + digit;
     num = num / 10;
     }
     if(isnegative == true){
        rev = -rev;             // then rev ko -rev kr denge.
     
     }
    
     
     cout << "the reverse of a number is :" << rev;

return 0;
}
