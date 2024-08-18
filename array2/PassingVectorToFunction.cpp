#include <iostream> 
#include <vector>

void change(std::vector<int> &vec){
    vec[0]=100;
}

int main(){
    std:: vector <int> v;
    v.push_back(6);
    v.push_back(26);
    v.push_back(264);
    v.push_back(10);
    for(int i=0 ;i<v.size();i++)
    {
        std ::cout<<v.at(i)<< "\t";
    }
    std:: cout<< std::endl;
    change(v);

    for(int i=0 ;i<v.size();i++)
    {
        std ::cout<<v.at(i)<< "\t";
    }
    std:: cout<< std::endl;
}