/*Program for rotating the elements of array k times clockwise i.e remove last item and push it in front
Example:
    {10, 20, 30, 40, 50} -> rotate k=3 times

    for k=1;
        {50, 10, 20, 30, 40}
    for k=2;
        {40, 50, 10, 20, 30}
    for k=3;
        {30, 40, 50, 10, 20}

Input:
    n - number of elements in array
    arr[]
    k - number of rotations

Output:
    print final arr[]
*/


#include <iostream>
using namespace std;

void rotate_arr(int *ptr, int n, int k){
    while(k>0){

        int temp = ptr[n-1];        //save last element
        for(int i=n-1; i>0; i--){   //shift elements to right
            ptr[i] = ptr[i-1];
        }
        ptr[0] = temp;              //push last element in front of array

        k--;
    }
}

int main(){
    int n, k;
    int arr[100];
    int temp;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>k;

    rotate_arr(arr, n, k);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}