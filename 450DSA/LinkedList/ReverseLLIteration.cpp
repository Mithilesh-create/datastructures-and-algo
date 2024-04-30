#include <bits/stdc++.h>
using namespace std;
Node* reverseLL(Node* ptr){
    Node* curr=ptr;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    reverseLL()
}