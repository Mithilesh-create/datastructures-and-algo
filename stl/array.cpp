#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> arr = {1,2,3,4,5};
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.at(2)<<endl;
    cout<<arr[2]<<endl;
    cout<<arr.size()<<endl;
}