#include <iostream>
using namespace std;
int main(){

double db = 10;
double *dbpointer = &db;
cout<<db<<endl;
cout<<dbpointer<<endl;
cout<<*dbpointer<<endl;
cout<<&db<<endl;
cout<<" "<<endl;

int var = 5;
//int pointer
int *varPointer = &var;
//addressof operator &
cout<<varPointer<<endl;
cout<<var<<endl;
cout<<&var<<endl;
cout<<*varPointer<<endl;
cout<<&varPointer<<endl;
cout<<" "<<endl;

char ch='J';
//char pointer
char *chpointer = &ch;
//
cout<<ch<<endl;
cout<<*chpointer<<endl;
cout<< &ch <<endl;
cout<< &chpointer <<endl;


class Node  {
    public:
        int value;
        Node *next;
}










}