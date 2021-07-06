#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node_doubly_linked_list{
    int data;
    struct node_doubly_linked_list *prev;
    struct node_doubly_linked_list  *next;
};

typedef struct node_doubly_linked_list node;
node *head=NULL, *tail=NULL;

void insert_at_head(int x){
    node *new;
    new=(node *)malloc(sizeof(node));
    if(new == NULL){
        printf("Insert at head failed,value: %d",x);
        return;
    }
    new->data=x;
    new->prev=NULL;
    new->next=NULL;
    if(head ==NULL){
        head= new;
        tail= new;
    }else{
        head->prev= new;
        new->next= head;
        head= new;
    }
    
}

void insert_at_last(int x){
    node *new;
    new=(node *)malloc(sizeof(node));
    if(new == NULL){
        printf("Insert at head failed,value: %d",x);
        return;
    }
    new->data=x;
    new->prev=NULL;
    new->next=NULL;
    if(head ==NULL){
        head= new;
        tail= new;
    }else{
        tail->next=new;
        new->prev=tail;
        tail=new;
    }
}
void print(void){
    node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void reverse_print(void){
    node *p=tail;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->prev;
    }
    printf("\n");
}

int main() {
    insert_at_head(2);
    insert_at_head(33);
    insert_at_last(48);
    insert_at_last(77);
    insert_at_head(10);
    insert_at_last(200);
    print();
    reverse_print();
    return 0;
}
