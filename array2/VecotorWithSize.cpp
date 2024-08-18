#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    // std::vector<int> arr(10); //arr(10,90) size is 10 and each value in array is 90
    
    /* 
    vector at ,sort
    */
    std:: vector<int> v;
    v.push_back(6);
    v.push_back(26);
    v.push_back(264);
    v.push_back(10);
    v.at(1) = 12;
    std:: cout<<v.at(1) <<std:: endl;
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        std::cout<<v.at(i) << " ";
    }
    std::cout<< std:: endl;

    
}