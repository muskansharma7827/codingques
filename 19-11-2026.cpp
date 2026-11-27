//GCD/HCF OF 2NOS. - BRUTE FORCE
#include<bits/stdc++.h>
using namespace std;
void HCF(int a , int b){
    int gcd = 1;
    for(int i=1;i<min(a,b);i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout << gcd;
    return;
}
int main(){
    int a , b;
    cin >> a >> b;
    HCF(a, b);
    return 0;
}




























/* 
#include<bits/stdc++.h>
using namespace std;   
void  checkGCD(int a , int b){
    while(b > 0){
        int rem= a%b;
        a = b;
        b = rem;
    }
    cout << a;
    return ;
} 
int main(){
    int a , b;
    cin >> a >> b;
    checkGCD(a,b);
    return 0;
}
    */

//void → function khud kaam karega (print bhi kar sakta hai)
//int, bool, double, etc. → function value return karta hai, us value ko use/print karna caller (main) ki responsibility hai.