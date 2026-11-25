/*
#include<bits/stdc++.h>
using namespace std;    
bool isPrime(int n){
    if(n < 2){
        
        return false;
    }
    for(int i = 2 ; i*i <= n ; i++){
        if(n % i == 0){
            
            return false;
        }
    }
    
    return true;
}
void checkprimeinrange(int a, int b){
    for(int n = a ; n <= b; n++){
        if(isPrime(n)){
            cout << n;
        }
        
    }
    return;
}

int main(){
    int a, b;
    cin >> a >> b;
    checkprimeinrange(a,b);
    return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;
void factorial(int n){
    long long fact = 1;
    if(n == 0){
        cout << "1";
        return;
    }
    for(int i = 1 ; i <= n ; i++){
        fact = fact * i;
    }
    cout << fact;
    return;
}
int main(){
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
    
/*
#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n){
    int a  = 0;
    int b= 1;
    for(int i = 0; i < n;i++){
        
        int c = a + b;
        b = a;
        c = b;
    }
    return;
}
int main(){
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}
    */

    //find nth fibonacci number
/*
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n <= 1)
    return n;

    int a =0;
    int b=1;
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    
    return b;
}
int main(){
    int n;
    cin >> n;
     fib(n);
    return 0;
}
    */


//recursive fibonacci
/*
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n <= 1)
    return n;

    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin >> n;
    cout <<fib(n);
    return 0;
}
 //recursive fib- 
 //tc-o(2^n) and sc-o(n)
 //iterative fib-
 //tc-o(n) and sc-o(1)
 */