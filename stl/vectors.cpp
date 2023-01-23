#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<v.at(1)<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<endl;
    v.push_back(40);
    cout<<v.capacity()<<endl;
    cout<<endl;
    v.push_back(40);
    cout<<v.capacity()<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }
    v.clear();
    v.shrink_to_fit();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // cout<<v.begin()<<endl;
    // cout<<v.end()<<endl;

return 0;

}