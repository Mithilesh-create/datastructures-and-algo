#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> myvector;
    int x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        myvector.push_back(x);
    };
    for(int i=0;i<myvector.size();i++){
        cout<<myvector<<" ";
    };
    return 0;
}