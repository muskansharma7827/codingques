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

