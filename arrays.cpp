#include<iostream>
using namespace std;

// int main(){
//     int x[3] = {1,5,8};
//     for(int i=0; i<=6; i++){
//         cout<<x[i]<<" ";

//     }
// }


// take input of __ARRAY

int main(){
    int arr[5];
    
    int i;
    cout<<"Enter the arrays elemt: ";
    for(i=0; i<=4; i++){
        cin>>arr[i];
    }

    for(i=0;  i<=4; i++){
        cout<<arr[i]<<" ";
    }
   
}