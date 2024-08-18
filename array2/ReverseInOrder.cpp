#include <iostream>
#include <vector>
using namespace std;
// question - reverse the array 
void display(vector<int> &a){
	for(int i=0 ; i<a.size();i++){
		cout<<a.at(i)<< " ";
	}
    cout<<endl;
    return ;
}

void reversePart(int a,int b ,vector<int>&v)
{
    while(a<=b)
    {
        int temp = v[a];
        v[a] = v[b];
        v[b]=temp;
        a++,b--;
    }
   return;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(10);
    display(v1);
    // vector<int> v2(v1.size());
    // for(int i=0;i<v2.size();i++){
	//     // i+j = size-1;
	//     int j = v1.size()-1-i;
	//     v2[i] =v1[j];
    // }

    // without send array 
    // int i=0, j=v1.size()-1;
    // while (i<=j)
    // {
    //     /* code */
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j]=temp;
    //     i++ , j--;
    // }
    reversePart(0,2,v1);
    display(v1);
    
    return 0;
}
