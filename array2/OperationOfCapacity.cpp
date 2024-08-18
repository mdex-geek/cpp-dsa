#include <iostream>
#include <vector>
// using namespace std;

int main(){
    std::vector<int> arr;
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
       std:: cout<<arr[i]<<" ";
    }
    std :: cout<< std::endl;
    std:: cout<< "capacity of vector array : "<< arr.capacity() << std::endl;
    std:: cout<< "Size of vector array : "<< arr.size() << std::endl;

    arr.pop_back(); // it pop the last element it will return nothing but the capacity of the array do not change
    arr.pop_back();
    arr.pop_back(); 
    for(int i=0;i<arr.size();i++){
       std:: cout<<arr[i]<<" ";
    }
    std :: cout<< std::endl;
    std:: cout<< "capacity of vector array : "<< arr.capacity() << std::endl; 
    std:: cout<< "Size of vector array : "<< arr.size() << std::endl;
}