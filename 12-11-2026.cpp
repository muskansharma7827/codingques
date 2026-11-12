#include<bits/stdc++.h>
using namespace std;
void swapping (int &a, int &b){
    // using third variable
    /*
    int temp;
    temp = a;
    a = b;
    b = temp; 
    */ 

    //using arithmetic operations
    /*
    a = a+ b;    //a=12+11=23
    b= a-b;      //b=23-11=12
    a = a-b;    //a=23-12=11
    */

    //using XOR
    a = a^b;    
    b = a^b;     //b=a^b^b=a^0=a
    a = a^b;     //a=a^b^a=0^b=b

}
int main(){
    int a, b;
    cin >> a >> b;
    swapping(a, b);
    cout << "the a and b are:" << a << " " << b;
    return 0;
}

