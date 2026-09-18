/*#include<bits/stdc++.h>
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
      /*
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
     */
      /*
     int num= 12345;
     int count = 0;
     if(num == 0){
      cout << 1;
     }
     while(num > 0){
      num = num/10;
      count++;
     }
     cout << "the count of digits in a number:" << count;
     */
/*     int num = -123;
     int digits;
     int sum = 0;
     while(num < 0){
      num = -num;
     }
     //logic
     while(num > 0){
     digits = num%10;
     sum = sum + digits;
     num = num/10;
     }
     cout << "the sum of digits in a number:" << sum;
return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
void swapnumbers(int &a ,int &b){             //"Jo variables tum mujhe doge, main unhi original variables ko modify karunga."
   int temp;
   //logic
   temp = a;
   a = b;
   b = temp;
}
int main(){
   int a = 10;
   int b = 20;
   swapnumbers(a,b);                         //"Function, mere original a aur b ke saath swap karna."
   cout << a << " " << b;
   return 0;
}
   */
//interview m function ka use krke hi ques solve krna h toh aise krenge.
/*
code explanation-
Firstly, there is a header file, which includes all the standard C++ libraries, and then `namespace`, which makes the code look cleaner. After that comes the main part of the program, which is `int main()`. Then we give the values of `a` and `b`. Then comes the function `swapnumbers`, in which the parameters `a` and `b` are passed. Then we look at the function definition, which has the datatype `void` because it will not return anything. It does not need to return anything because the values have to be swapped, and there is no need to give anything back. So, there is no return value, and that's why we use `void` instead of another datatype like `int`, `float`, etc.
The parameters `&a` and `&b` are reference parameters, which means the function works with the original variables instead of their copies. Then comes the logic. First, the value of `a` is stored in `temp`, then `a` gets the value of `b`, and finally `b` gets the value stored in `temp`. After the logic ends, the values of `a` and `b` are swapped, and then the function ends with the curly brace.
Now, in `main`, the values of the original variables are changed because `a` and `b` were passed by reference. We pass the variables `a` and `b`, not just their values, because if we passed them by value, the function would get copies and the original values would not be changed. Since the original values are swapped directly, there is no need to return anything. And if we don't need to return anything, there is no need to store the `swapnumbers` function in another variable. Finally, we print `a` and `b`, and the swapped values get printed.
i am understanding this thing, now, i have passed the  variables values as 10 and 20, and  if I donot pass the values, means I take the input from the user, then I have to write a,b only bcz how I would get to know the values, so, a,b not 10,20 in swapnumbers(a,b) not swapnumbers(10,20).
*/
/*
#include<bits/stdc++.h>
using namespace std;
void swapnumbers(int &a ,int &b){
   
   //logic
   a = a+b;
   b=a-b;
   a=a-b;
}
int main(){
   int a = 10;
   int b = 20;
   swapnumbers(a,b);
   cout << a << " " << b;
   return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
void swapnumbers(int &a ,int &b){
   a=a^b;
   b=a^b;
   a=a^b;
}
int main(){
   int a,b;
   cin >> a >> b;
   swapnumbers(a,b);
   cout << a << " " << b;
   return 0;
}
*/
//INTERVIEW QUES ASKED FROM THIS QUES-
/*
Haan. Agar interview mein **“swap two numbers”** poochha hai, toh interviewer sirf basic code par nahi ruk sakta. Tumhe in follow-up questions ke liye ready rehna chahiye.

## 1. Third variable wala approach

void swapnumbers(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
**TC:** `O(1)`
**SC:** `O(1)` — one extra variable `temp`.

## 2. Without third variable — addition/subtraction

void swapnumbers(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
**TC:** `O(1)`
**SC:** `O(1)`

### Interviewer may ask:

**Q: Is there any problem with this approach?**
Yes. **Integer overflow** can happen if `a + b` becomes larger than the range of `int`.
For example, if both numbers are very large, `a + b` may not fit in an `int`.
So don't say this is always better than using `temp`.

# 3. XOR approach

Your current code:
void swapnumbers(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
**TC:** `O(1)`
**SC:** `O(1)`

### Interviewer may ask:

**Q: Why does XOR swapping work?**
You should know these properties:
x ^ x = 0
x ^ 0 = x
and XOR is reversible.

For example:
a = 10
b = 20

a = a ^ b
b = a ^ b
a = a ^ b
It eventually restores the two values in reversed positions.

### But there's a catch

XOR is mainly applicable to **integer/bitwise types**, and the logic is less readable than using a temporary variable.

# 4. They can ask: "Can you use `swap()`?"

Yes:
swap(a, b);

C++ already provides `std::swap`.

If asked to **implement swapping yourself**, however, don't just use `swap()` because they probably want to see the logic.

# 5. VERY likely: "Why are you using `&`?"

Answer:

> "`&` makes the parameters references, so the function operates on the original variables. Without `&`, copies would be passed and the original values in `main()` would not change."

# 6. "Why `void`?"

Answer:

> "The function directly modifies the original variables through references, so there is no value that needs to be returned. Therefore I use `void`."

# 7. "Why can't you write this?"

swapnumbers(10, 20);
Answer:
> "Because the parameters are references, so I need to pass actual variables that can be modified, not temporary literal values like `10` and `20`."

# 8. "What happens if you remove `&`?"
If you write:
void swapnumbers(int a, int b)
then the function receives **copies**.

So:

int a = 10;
int b = 20;

swapnumbers(a, b);
will still leave:
a = 10
b = 20

after the function ends.

# 9. "Can you swap without a function?"

Yes:

int temp = a;
a = b;
b = temp;
Then they may ask:

> "Why did you use a function?"
You can say:

> "Using a function makes the swapping logic reusable and separates it from the main program."

# 10. "What is the TC and SC?"
You should be **very quick** here.
### All three approaches:

| Approach             |   Time | Extra Space |
| -------------------- | -----: | ----------: |
| Third variable       | `O(1)` |      `O(1)` |
| Addition/Subtraction | `O(1)` |      `O(1)` |
| XOR                  | `O(1)` |      `O(1)` |

Don't say XOR has `O(0)` space. Even though it doesn't use a third variable, **space complexity is generally described as `O(1)`** because the number of variables involved is constant.

## 11. One more thing they can ask: "What if `a` and `b` are the same variable?"
This is especially relevant to your **XOR version**.
For example:
swapnumbers(a, a);
With the XOR method:
a = a ^ a;   // 0
a = a ^ a;   // 0
a = a ^ a;   // 0

So the value can become `0`.
That's one reason the XOR trick isn't a generally preferable swapping implementation.
The **temporary-variable approach is much easier to understand and safer for normal interview code.**
*/ 

/*
#include<bits/stdc++.h>
using namespace std;
int checkpallindrome(int &n){
   int rev=0;
   int digits ;
   int original = n;
   //logic
   if(n < 0){
      n = abs(n);
      original = abs(n);
   }
   while(n > 0){
      digits = n%10;
      rev = rev*10+n;
      n=n/10;
   }
   if(original == rev){
      cout << "pallindrome.";
   }
   else{
      cout << "not pallindrome.";
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
   int fast = s.size()-1;

   while(slow < fast){
      if(s[slow] == s[fast]){
         slow++;
         fast--;
      }
      else{
         cout << "not pallindrome.";
         return;
      
      }
   }
   cout << "pallindrome.";
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
int checkpallindrome(int n){
   string s = to_string(n);
   int slow = 0;
   int fast = s.size()-1;
   while(slow < fast){
      if(s[slow] == s[fast]){
         slow++;
         fast--;
      }
      else{
         return 0;
      }
      
   }
   return 1;

}
int main(){
   int n;
   cin >> n;
   
   if(checkpallindrome(n)){
      cout << "pallindrome";
   }
   else{
      cout << "not";
   }
}
  
*/

//in thus above case, whatrver u write void,int if inut neter -121 and tell ignore negative sign , so u will write 
/*
class Solution {
  public:
    bool isPalindrome(int n) {
        if(n < 0){
            n = abs(n);
        }
        string s = to_string(n);
        int slow=0;
        int fast=s.size()-1;
        
        while(slow<fast){
            if(s[slow]==s[fast]){
                slow++;
                fast--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
that's it.
*/


/*
why use void in function , also can use int, yes.then if void, is used means not to return nathung, and also wnat to stope teh function, bcz if slow>fast in case, so, ythe funcytion ks su[posed to end, thta's why use return,
if used int chackpallindrome, so, return 0 or 1 will be used, means have to stope teh function but give the value 0 or 1 which means false or true, back to the caller, so, the value will be back as 0/1 means false/true, and cout statements to check- 
if(chackpallindrome(n){
    cout << "pallindrome";          //return 1=pallindrome
}
    else{
    cout << "not pallindrome";     //return 0-not plalindrome
    }

    now, why not use & with n in function-
Only READ n       → int n
READ + CHANGE n  → int &n
in this case, i ma just checking it if iis a apllaindrome o not, in swapping i am chnaging the vlues of teh varviles,swapping it, thta's why needed &.
*/

//now, reverse a string an dcheckoriginal string with teh reversed strung will it be equal or not, it is same like revrsed method, it is just teh diffrenve thta the string is getting revrsed in earkler reversed method, teh number gets revrsed.
/*
#include<bits/stdc++.h>
using namespace std;
bool checkpallindrome(int n){
   if(n < 0){
      n = abs(n);
   }
   string s = to_string(n);
   string rev = s;
   reverse(s.begin(),s.end());
   if(s == rev){
      return true;
   }
   else{
      return false;
   }
}
int main(){
   int n;
   cin >> n;

   if(checkpallindrome(n)){
      cout << "pallindrome";
   }
   else{
      cout << "not";
   }

}
*/
/*
**INTERVIEW QUES**
Absolutely. If you know these **3 approaches**:

1. **Reverse the number mathematically**
2. **Convert number → string and use `reverse()`**
3. **Convert number → string and compare characters from both ends**

then an interviewer can ask questions around **logic, complexity, edge cases, and why you chose one approach**.

### 🔥 Most likely interview questions

#### 1. What is a palindrome number?

A number that reads the same forward and backward.

Example:

```text
121 → palindrome
123 → not palindrome
```

---

#### 2. How many approaches do you know?

You can say:

> “I know three approaches: reversing the number using arithmetic, converting the number to a string and reversing it, and checking the string using two pointers.”

---

#### 3. Which approach would you choose in an interview?

They may ask **why**.

You can say:

> “If the interviewer wants a pure mathematical approach, I would use number reversal. If string operations are allowed, the string approach is simpler to implement.”

Don't just say one is "better"; explain based on the requirement.

---

#### 4. What is the time complexity?

For number reversal:

```text
O(d)
```

where `d` = number of digits.

For string approaches:

```text
O(d)
```

because you process the digits.

Space:

* Mathematical reversal → **O(1)**
* String approach → **O(d)**

---

#### 5. Why do we use `% 10` when reversing a number?

For:

```text
123
```

```cpp
123 % 10 = 3
```

So `% 10` gives us the **last digit**.

Then:

```cpp
123 / 10 = 12
```

removes the last digit.

---

#### 6. Why do we use `rev = rev * 10 + digit`?

This is a **very common follow-up**.

For `123`:

```text
rev = 0

digit = 3
rev = 0 * 10 + 3 = 3

digit = 2
rev = 3 * 10 + 2 = 32

digit = 1
rev = 32 * 10 + 1 = 321
```

---

#### 7. What happens with negative numbers?

For example:

```text
-121
```

You need to decide how your program should treat it.

If you do:

```cpp
if(n < 0)
    n = abs(n);
```

then `-121` becomes `121`, so your program considers it a palindrome.

But an interviewer may ask:

> **"Should -121 actually be considered a palindrome?"**

You should say:

> “It depends on the problem definition. If the problem considers the sign, then -121 is not a palindrome. If we're checking only the digits, we can take its absolute value.”

That's a good interview answer.

---

#### 8. What happens with `0`?

```text
0 → palindrome
```

Your code handles this correctly.

---

#### 9. What happens with trailing zeros?

Example:

```text
120
```

Reverse:

```text
021 → 21
```

So:

```text
120 ≠ 21
```

Therefore it is **not a palindrome**.

They may specifically ask this to see whether you understand that leading zeros disappear when using an integer.

---

#### 10. Why do you use `bool` for the function?

Because the function has only two possible answers:

```text
true  → palindrome
false → not palindrome
```

So:

```cpp
bool checkPalindrome(int n)
```

is appropriate.

---

### 🧠 Questions specifically about your string approach

They can ask:

**"Why did you write `string rev = s`?"**

Answer:

> “I create a copy of the original string so that I can reverse one string and compare it with the original.”

For example:

```text
s   = "121"
rev = "121"
```

Then reverse `s`:

```text
s   = "121"
rev = "121"
```

Compare:

```cpp
s == rev
```

---

### ⭐ Very important: interviewer may ask you to do it WITHOUT `reverse()`

They might say:

> "You converted it to a string, but don't use the built-in `reverse()` function."

Then you can use **two pointers**:

```text
121
↑   ↑
L   R
```

Compare:

```text
s[L] == s[R]
```

Then move:

```text
L++
R--
```

For `1221`:

```text
1 == 1
2 == 2
```

Therefore palindrome.

---

### 🔥 And the big interview follow-ups

Be prepared for these:

* What is a palindrome?
* Explain your approach.
* Why `% 10`?
* Why `/ 10`?
* Why `rev * 10 + digit`?
* Why `bool`?
* Time complexity?
* Space complexity?
* What about negative numbers?
* What about `0`?
* What about `120`?
* Can you solve it without converting to a string?
* Can you solve it without `reverse()`?
* Can you solve it using two pointers?
* Can you avoid reversing the **entire** number?
* What if the number is very large and causes integer overflow?
* Can you write the function separately?
* Why are you calling the function twice in your original code?

That **last one actually applies to the code you just showed me**. Your original `main()` had:

```cpp
checkpallindrome(n);

if(checkpallindrome(n))
```

An interviewer could notice that and ask why you're calling the function twice. The correct answer is: **the first call is unnecessary because you don't use its returned value.**
*/
// **pallindrome of a number - 4 appraoches- reversed,string,string+reverse, also stack(study the approach for interview) , also only reverse the first half and compare.**
/*
Mathematical reverse       → O(d) time, O(1) space
String + reverse           → O(d) time, O(d) space   //no.of digits to store and another copy in rev
String + two pointers      → O(d) time, O(d) space   //no.of digits to store and another copy in rev
Stack                      → O(d) time, O(d) space
Half-number reverse        → O(d) time, O(1) space
d is no.of digits.
*/

#include<bits/stdc++.h>
using namespace std;
int reversedigits(int n){
   int digits;
   int rev=0;
   //logic
   if(n < 0){
      n = abs(n);
   }
   if(n ==0){
      return 0;
   }
   
   while(n > 0){
   digits=n%10;
   rev=rev*10+digits;
   n=n/10;
   }
   return rev;



}
int main(){
   int n;
   cin >> n;
   int digit = reversedigits(n);
   cout << digit << endl;
   return 0;
}