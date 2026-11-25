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

//void → function khud kaam karega (print bhi kar sakta hai)
//int, bool, double, etc. → function value return karta hai, us value ko use/print karna caller (main) ki responsibility hai.