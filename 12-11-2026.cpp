/*
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
    /*
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

*/

/*
#include<bits/stdc++.h>
using namespace std;
int checkpallindrome(int n){
    int rev = 0;
    int digits;
    int original = n;
    if(n == 0){
        cout << "the number is pallindrome";
        return 1;
    }
    if(n < 0){
        n = abs(n);
        original = n;
    }
    while(n > 0){
        digits = n % 10;
        rev = rev * 10 + digits;
        n = n / 10;
    }
    if( rev == original){
        cout << "the number is pallindrome";
        return 1;
    }
    else{
        cout << "the number is not pallindrome";
        return 0;
    }
    
}
int main(){
    int n;
    cin >> n;
    checkpallindrome(n);
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
bool checkpallindrome(int n){
    int rev = 0;
    int digits;
    int original = n;
    if(n == 0){
        cout << "the number is pallindrome";
        return true;
    }
    if(n < 0){
        n = abs(n);
        original = n;
    }
    while(n > 0){
        digits = n % 10;
        rev = rev * 10 + digits;
        n = n / 10;
    }
    if( rev == original){
        cout << "the number is pallindrome";
        return true;
    }
    else{
        cout << "the number is not pallindrome";
        return false;
    }
    
}
int main(){
    int n;
    cin >> n;
    checkpallindrome(n);
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
void checkpallindrome(int n){
    int rev = 0;
    int digits;
    int original = n;
    if(n == 0){
        cout << "the number is pallindrome";
        return;
    }
    if(n < 0){
        n = abs(n);
        original = n;
    }
    while(n > 0){
        digits = n % 10;
        rev = rev * 10 + digits;
        n = n / 10;
    }
    if( rev == original){
        cout << "the number is pallindrome";
        return;
    }
    else{
        cout << "the number is not pallindrome";
    }
    
}
int main(){
    int n;
    cin >> n;
    checkpallindrome(n);
    return 0;
}
    */

/*
#include<bits/stdc++.h>
using namespace std;
void checkpallindrome(int n){
    string s = to_string(n);
    int slow = 0;
    int fast = s.size() - 1;

    while(slow < fast){
        if(s[slow] == s[fast]){
            slow++;
            fast--;
        }
        else{
            cout << "the number is not pallindrome";
            return;
        }
    }
    cout << "the number is pallindrome";
}
int main(){
    int n;
    cin >> n;
    checkpallindrome(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void checkpallindrome(int n){
    n = abs(n);
    string s = to_string(n);
    string original = s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(rev == original){
        cout << "the number is pallindrome";
        return;
    }
    else{
        cout << "the number is not pallindrome";
        return;
    }
}

int main(){
    int n;
    cin >> n;
    checkpallindrome(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void reversestring(int n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    cout << s;
    return;
}
int main(){
    int n;
    cin >> n;
    reversestring(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void sumofdigits(int &n){
    int sum = 0;
    int d ;
    if(n == 0){
        cout << 0;
        return;
    }
    if(n < 0){
        n = abs(n);
    }
    while(n > 0){
        d = n % 10;
        sum = sum + d;
        n = n/10;
    }
    cout << sum;
    return;


}
int main(){
    int n;
    cin >> n;
    sumofdigits(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void countdigits(int &n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    cout << count;
    return;
}
int main(){
    int n;
    cin >> n;
    countdigits(n);
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int d;
    int arm = 0;
    int original = n;
    if(n < 0){
        cout << "the number is not armstrong";
        return;
    }
    while(n > 0){
        d = n % 10;
        arm = arm + (d*d*d);
        n = n / 10;
    }
    if(arm == original){
        cout << "the number is armstrong";
        return;
    }
    else{
        cout << "the number is not armstrong";
        return;
    }
}
int main(){
    int n;
    cin >> n;
    armstrong(n);
    return 0;
}
    */
//tghis above code for armstring number is not working for 4 digit numbers. I will fix it by changing the power from 3 to the number of digits in the number.
// by using pow function from cmath library. 
//**GENERALLY ARMSTRONG NUMBER IS A NON-NEGATIVE NUMBER.**

/*
#include<bits/stdc++.h>
using namespace std;
void armstrong( int n){
    int d ;
    int arm = 0;
    int original = n;
    int temp = n;
    int digits = 0;
    if(temp == 0){
        cout << "the number is armstrong";
        return;
    }
    if(temp < 0){
        cout << "the number is not armstrong";
        return;
    }
    while(temp > 0){
        temp = temp / 10;
        digits++;
    }
    temp = n;

    while(temp  > 0){
        d = temp % 10;
        arm = arm + pow(d,digits);
        temp = temp / 10;
    }
    if(arm == original){
        cout << "the number is armstrong";
        return;
    }
    else{
        cout << "the number is not armstrong";
        return;
    }
}
int main(){
    int n;
    cin >> n;
    armstrong(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void fact(int &n){
    long long fact = 1;
    if(n == 0){
        cout << 1;
        return;

    }
    for(int i = 0; i<n;i++){
        fact =  fact * n;
        n--;
    }
    cout << fact;
    return;
}
int main(){
    int n;
    cin >> n;
    fact(n);
    return 0;
}
    */

    /*
#include<bits/stdc++.h>
using namespace std;
void checkprime(int &n){
    if(n < 2){
        cout << "the number is not prime";
        return;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << "the number is not prime";
            return;
        }
    }
    cout << "the number is prime";
    return;
}
int main(){
    int n;
    cin >> n;
    checkprime(n);
    return 0;
}
    */

