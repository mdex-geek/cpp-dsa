#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {12,23,34,23};
    int total =1;

    // sum of array
    // for (int i = 0; i < sizeof(arr)/4; i++)
    // {
    //     total+=arr[i];
    // }

    //product of array
    // for (int i=0;i<sizeof(arr)/4;i++){
    //     total *=arr[i];
    // }
    // cout<<total<<"\n";
    // return 0;

    // mx in a array

    int max = INT_MIN;
    cout<<max<<endl;
    for (int i=0;i<sizeof(arr)/4;i++){
        if (max <arr[i]){
            max = arr[i];
        }
    }
    cout<< max<<endl;
    return 0;
    
}