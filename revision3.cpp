/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    int temp;
    //logic
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}
    */

/*
#include<bits/stdc++.h>
using namespace std;
void swapnumbers(int &a , int &b){
    /*
    int temp;
    //temp logic
    temp = a;
    a = b;
    b = temp;
    */
     
    /*
    //add and sub logic
    a = a+b;
    b=a-b;
    a=a-b;
    */

    //bitwise logic
    /*
    a = a^b;
    b=a^b;      
    a=a^b;       // a=a^b ^a= a^a^b = 0^b = b;
}
int main(){
    int a , b;
    cin >> a >> b;
    swapnumbers(a , b);
    cout << a << " " << b;
    return 0;
}
*/

/*
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int num;
    cin >> num;
    int rev = 0;
    int digits;
    int original = num;
    bool isnumbernegative = false; 
    while(num < 0){
        isnumbernegative = true;
        num = abs(num);
    }
    //logic
    while(num > 0){
    digits = num%10;
    rev = rev*10+digits;
    num = num/10;
    }
    if(isnumbernegative == true){
        rev = -rev;
    }
    
    if(rev == original){
        cout << "the number entered is pallindrome";
    }
    else{
        cout << "the number entered is not pallindrome";
    }
    
    return 0;
    
}
    */



#include<bits/stdc++.h> 
using namespace std;
void pallindrome(int num){
    //logic
    int rev = 0;
    int digits;
    int original = num;
    bool isnumbernegative = false; 
    while(num < 0){
        isnumbernegative = true;
        num = abs(num);
    }
    //logic
    while(num > 0){
    digits = num%10;
    rev = rev*10+digits;
    num = num/10;
    }
    if(isnumbernegative == true){
        rev = -rev;
    }
    if(rev == original){
        cout << "the number entered is pallindrome";
    }
    else{
        cout << "the number entered is not pallindrome";
    }


}
int main(){
    int num;
    cin >> num;
    cout << num;
    pallindrome(num);
    cout << num << endl;
}

