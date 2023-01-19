#include <iostream>
using namespace std;
int main(){


int var = 5;
//int pointer
int *varPointer = &var;
//addressof operator &
cout<<varPointer<<endl;
cout<<var<<endl;
cout<<&var<<endl;
cout<<*varPointer<<endl;
cout<<&varPointer<<endl;


char ch='J';
//char pointer
char *chpointer = &ch;
//
cout<<ch<<endl;
cout<<*chpointer<<endl;
cout<< &ch <<endl;
cout<< &chpointer <<endl;

}