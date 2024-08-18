#include <iostream>
using namespace std ;

int  main(){
    int arr [] = {90,30,78,32,71,65};
    for (int i =0 ;i < sizeof(arr)/4;i++){
        cout<< arr[i]<<endl;
    }
}