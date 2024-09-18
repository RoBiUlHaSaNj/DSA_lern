/*
. must be sort
. if  i need to  find target  value
. divided two  part in array
.low mid high
than cheek value if mid lower or mid higher



*/
#include <bits/stdc++.h>
using namespace std;
int binarserch(int arr[],int low ,int high,int x)//x=target
{
    if(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
            {
                return mid;
            }
         if(arr[mid]>x)
            {
                //mid >x  x will be find lower to mid
                return  binarserch(arr, low ,mid-1,x) ;
            }
         if(arr[mid]<x)
            {  //mid <x  x will be find higher  to mid

                return  binarserch(arr, mid+1 ,high,x) ;;
            }
    }
    // Element not found
    return -1;

}
/*

int key = 5;

    if (std::binary_search(arr.begin(), arr.end(), key)) {
        std::cout << key << " is found in the array.\n";
    } else {
        std::cout << key << " is not found in the array.\n";
    }

*/
int main() {
    int arr[] = {10, 30, 40, 50, 60, 90, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 90;

    // Sort the array before performing binary search
    sort(arr, arr + n);

    int result = binarserch(arr, 0, n - 1, x);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
