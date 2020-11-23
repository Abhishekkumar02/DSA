#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
 
void revereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}     

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 
int main() 
{
    int n,arr[10];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    // int n = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, n);
    revereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
    printArray(arr, n); 
    return 0;
}