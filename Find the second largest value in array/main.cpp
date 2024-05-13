//
//  main.cpp
//  Find the second largest value in array
//
//  Created by Rafsan Sahad on 5/13/24.
//

#include <iostream>
using namespace std;

void secondlargest(int arr[], int n)
{
    
    int largest=arr[0],secondlargest=arr[0];
    for (int i=0; i<=n-1; i++) {
        if (largest<arr[i]) {
            secondlargest=largest;
            largest=arr[i];
            
        }
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
            
        }
    }
    cout<<"The Largest :"<<largest<<endl;
    if (secondlargest != largest) {
        cout << "The second largest element is: " << secondlargest;
    } else {
        cout << "There is no second largest element\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the array size :";
    cin>>n;
    int arr[n];
    for (int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }
    secondlargest(arr, n);
    return 0;
}
