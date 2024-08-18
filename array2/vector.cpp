#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::vector<int> arr;
    arr.push_back(6);
    cout << arr.capacity()<<endl;
    arr.push_back(3);
    arr.push_back(1);
    cout<<arr.size() <<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(0);
       
    
}