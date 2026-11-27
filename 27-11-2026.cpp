//GCD/HCF OF 2NOS. - BRUTE FORCE
/*
#include<bits/stdc++.h>
using namespace std;
void HCF(int a , int b){
    int gcd = 1;
    for(int i=1;i<=min(a,b);i++){
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
    // tc- o(min(a,b))
    //sc-o(1)
*/


// GCD/HCF OF 2 NOS. - BETTER
/*
#include<bits/stdc++.h>
using namespace std;
void HCF(int a, int b){
    
    for(int i=min(a,b) ; i >= 1; i--){
        if(a%i == 0 && b%i == 0){
            cout << i;
            break;
        }
    }
    return;
}
int main(){
    int a , b;
    cin >> a >> b;
    HCF(a ,b);
    return 0;
}
    //tc-  best- o(1)
           worst- o(min(a,b))
    sc-o(1)
    */


// GCD/HCF OF 2 NOS. - BEST (EUCLIDEAN)
/*
#include<bits/stdc++.h>
using namespace std;
void HCF(int a, int b){
    while(b > 0){
    int rem = a%b;
    a = b;
    b = rem;
    }
    cout << a;
    return;
}
int main(){
    int a , b;
    cin >> a >> b;
    HCF(a, b);
    return 0;
}
    */
//tc- o(log(min(a,b))) -> "In every iteration, the problem size decreases significantly because we replace (a,b) with (b, a%b). The remainder is always smaller than b, so the values shrink rapidly. Therefore the number of iterations grows logarithmically, giving a time complexity of O(log(min(a,b)))."
//sc-o(1)

//Recursive solution of GCD
/*
#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b){
    if(b == 0){
        return a;
    }
    return HCF(b,a%b);
}
int main(){
    int a , b;
    cin >> a >> b;
    cout << HCF(a,b);
    return 0;
}
*/
//tc- o(log(min(a,b)))
//sc-o(log(min(a,b)))

// GCF of array
/*
#include<bits/stdc++.h>
using namespace std;
int HCF(int a, int b){
    while(b>0){
    int rem = a%b;
    a=b;
    b=rem;
    }
    return a;
}
int GCDofArray(int arr[],int n){
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans = HCF(ans, arr[i]);
    }
    return ans;

}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << GCDofArray(arr,n);
    return 0;
}
    */


/*
Interview me agar pooche:

GCD of an array ka idea kya hai?

Seedha bolna:

Plain Text
GCD is associative.
 
gcd(a,b,c,d)
=
gcd(gcd(gcd(a,b),c),d)
*/
//imp
/*
Tumhara point bhi sahi hai 👍

Actually precise analysis me Euclidean GCD ki complexity hoti hai:

O(log(min(a,b)))


To agar hum exact likhen:

TC = O(n × log(min(a,b)))


Lekin GCD of Array me problem ye hai ki har iteration me a aur b alag-alag hote hain.

Example:

12 18 24 30


Iterations:

gcd(12,18)
gcd(6,24)
gcd(6,30)


Har baar min(a,b) change ho raha hai.

Isliye books aur interviews me commonly likhte hain:

TC = O(n × log(M))


jahaan

M = maximum element in the array


Kyuki kisi bhi GCD call me numbers M se bade nahi honge.

Interview Answer

Agar interviewer pooche:

Complexity of GCD of Array?


Tum ye bol sakti ho:

Each GCD operation takes O(log(min(a,b))).
We perform it for n−1 elements.

Hence TC = O(n × log(M)),
where M is the maximum element of the array.


Ya phir:

TC = O(n × log(min(a,b)))


as an intuition for a single GCD call.

Dono ideas related hain, lekin standard interview notation hoti hai:

TC = O(n × log(M))
SC = O(1)


where M = max(arr[i]).

✅ Isliye tumhara thought wrong nahi hai, bas analysis ko array ke maximum element ke terms me generalize kar diya jata hai.
*/
/*
SC = O(1)
*/

//using built-in functions  - tc-o(log(min(a,b))) bcz __gcd khud euclidean algorithm use krta h  and sc-o(1)
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = __gcd(a,b);
    cout << ans;
    return 0;
}
    */

//LCM using GCD
/*
#include<bits/stdc++.h>
using namespace std;
int g(int a , int b){
    while(b > 0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    int a, b;
    cin >> a >> b;
    int hcf = g(a,b);
    int LCM = (a*hcf) / b;
    cout << LCM;
    return 0;

}
    */
/*
GCD/HCF Edge Cases (Interview Notes)

✅ 1. GCD(0, n) = n

Example:

GCD(0, 5) = 5
GCD(0, 10) = 10


Reason:

0 har number se divisible hota hai.


✅ 2. GCD(n, 0) = n

Example:

GCD(5, 0) = 5
GCD(10, 0) = 10


Euclidean algorithm me:

while(b > 0)


loop chalega hi nahi.

✅ 3. GCD(0, 0) = Undefined

Example:

GCD(0, 0)


Reason:

Every number divides 0.


Isliye greatest common divisor define nahi hota.

Interview me bolna:

Special case, mathematically undefined.


✅ 4. Same Numbers

Example:

GCD(12, 12) = 12
GCD(25, 25) = 25


Rule:

GCD(a, a) = a


✅ 5. One Number Divides Another

Example:

GCD(12, 24) = 12
GCD(15, 45) = 15


Rule:

If b % a == 0
then GCD = smaller number


✅ 6. Co-prime Numbers

Example:

GCD(8, 15) = 1
GCD(17, 19) = 1


Rule:

Only common factor = 1


✅ 7. Negative Numbers

Example:

GCD(-12, 18)


Handle using:

a = abs(a);
b = abs(b);


Then:

GCD(12,18) = 6


✅ 8. Large Numbers

Example:

1000000000
2000000000


Use:

long long


otherwise overflow ho sakta hai.

Interview Rapid Fire
GCD(0,n)   = n
GCD(n,0)   = n
GCD(0,0)   = Undefined
GCD(a,a)   = a
Co-primes  = 1
Negative numbers → use abs()
Large numbers → use long long


Ye saare edge cases interviewer ekdum rapid-fire me pooch sakta hai. ✅
*/

//LCM of 2 nos.
//brute force
/*
#include<bits/stdc++.h>
using namespace std;
int LCM(int a, int b){
    int maxi = max(a,b);
    while(true){
        if(maxi % a == 0 && maxi % b == 0){
            
            return maxi;
        }
        maxi++;
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << LCM(a,b);
    return 0;
}
    */
   //tc-o(a*b) --> Brute force max(a,b) se start karke LCM tak jaata hai. Worst case co-prime numbers me LCM = a*b hota hai, isliye TC ≈ O(a*b) hoti hai.
   //sc-o(1)

   // now lcm of 2 nos, optimal approach by using gcd thta is , lcm * gcd = a * b;
   #include<bits/stdc++.h>
   using namespace std;
   
   int main(){
    int a, b;
    cin >> a >> b;
    int hcf = __gcd(a,b);
    int lcm = (a/hcf) * b;
    cout << lcm;
    return 0;

   }

   //tc-o(log(min(a,b))) bcz hcf takes o(log(min(a,b))) and lcm = a/hcf * b takes o(1) and sc - o(1)