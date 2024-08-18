#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4,2,3,5,6};
    int *ptr= arr;

    // cout<< ptr<<endl;
    // cout<< &arr[0]<<endl;
    // cout<<arr<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<"\t";
    // }
    // cout<<endl;

    *ptr =100;  // arr[0] = 100
    cout<< *ptr<<endl;
    ptr++; //arr[1]
    cout<< *ptr<<endl;
    ptr++; //arr[2]
    cout<< *ptr<<endl;
}