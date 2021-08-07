/*Program for counting numbers between n1 and n2 which have no repetitive digits
 Example:
    11, 101, 202, 5676 contains repetitive digits
    12, 203, 567, 8976 have no repetitve digits

Input:
    two numbers n1, n2 such that n1<n2

Output:
    Count of numbers with no repetitve digits between n1 and n2 (including them)
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solution(int n1, int n2){
    int count = 0;

    for (int i=n1; i<=n2; i++){                     //select number sequentially between n1 and n2
        bool valid_num = true;
        int temp = i;
        bool digit_exist[10];
        memset(digit_exist, false, sizeof(digit_exist));

        while(temp>0){                              //traversing each digits of the selected number

            if(digit_exist[temp%10]){               //checking Is digit appeared previously?
                valid_num = false;
                break;
            }else{
                digit_exist[temp%10] = true;   
                temp /= 10; 
            }

        }

        if(valid_num){
            count++;
        }
    }

    return count;
}

int main(){
    int n1, n2;
    cin>>n1;
    cin>>n2;

    cout<<"Count: "<<solution(n1, n2);

    return 0;
}