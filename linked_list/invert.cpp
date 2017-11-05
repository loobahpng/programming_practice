#include<iostream>
#include <stdlib.h> 
using namespace std;
typedef struct list_node* list_pointer;
typedef struct list_node{
    int data;
    list_pointer link;
}ListNode;
list_pointer print_list (list_pointer x){
    cout<<"--begin--"<<endl;
    while(x!=NULL){
        cout<<x->data<<endl;
        x=x->link;
    }
    cout<<"--end--"<<endl;
}
list_pointer Invert (list_pointer x){
    list_pointer y,z;
    y=NULL;
    while(x!=NULL){
        z=y;
        y=x;
        x=x->link;
        y->link=z;
    }
    return (y);
}
int main(){
    list_pointer x,a,b,c,y;
    x=(list_pointer) malloc (sizeof(ListNode));
    a=(list_pointer) malloc (sizeof(ListNode));
    b=(list_pointer) malloc (sizeof(ListNode));
    c=(list_pointer) malloc (sizeof(ListNode));
    y=(list_pointer) malloc (sizeof(ListNode));
    x->data=4;
    a->data=3;
    b->data=2;
    c->data=1;
    x->link=a;
    a->link=b;
    b->link=c;
    c->link=NULL;
    print_list(x);
    x=Invert(x);
    print_list(x);
}
