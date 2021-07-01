// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct linked_list{
    int data;
    struct linked_list *next;
};

typedef struct linked_list node;

node *head=NULL,*tail=NULL;

bool insert_end(int data){
    node *new;
    new= (node *) malloc(sizeof(node));
    if(new == NULL){
        printf("Insert End Failed for data %d\n", data); 
        return false;
    }
    new->data=data;
    if((head==NULL) && (tail==NULL)){
        head=tail=new;
    }else{
        tail->next= new;
        tail=new;
    }
    new->next=NULL;
    return true;
}
bool insert_front(int data){
    node *new;
    new= (node *) malloc(sizeof(node));
    if(new == NULL){
        printf("Insert front Failed for data %d\n", data); 
        return false;
    }
    new->data=data;
    if((head==NULL) && (tail==NULL)){
        head=tail=new;
        new->next=NULL;
    }else{
        new->next = head;
        head = new;
    }
    return true;
}
/* postion: Node data to be added before */
bool insert_position(int data, int position){
    node *new, *temp, *p, *prev;
    new= (node *) malloc(sizeof(node));
    if(new == NULL){
        printf("Insert front failed for data %d position %d\n", data,position); 
        return false;
    }
    if((head==NULL) && (tail==NULL)){
        printf("Insert position failed as linked list is empty \n");
        return false;
    }
   /* Checking if its head node*/
    if(head->data ==position){
        /* We found the data */
        temp = head;
        head = new;
        new->next = temp;
        new->data=data;
        return true;
    }else{
        p = head->next;
    }
    while(p != NULL){
        if(p->data ==position){
            prev->next=new;
            new->next=p;
            new->data=data;
            break;
        }else{
            prev = p;
            p = p->next;
        }
    }
    if(p == NULL){
        /* we didn't find the node */
        printf("Insert position Failed for position %d\n", position);
        free(new);
        return false;
    }
     return true;
}

/* postion: Node data to be replaced */
bool delete_node(int position){
    node *p=head, *temp, *prev=head;
    if((head==NULL) && (tail==NULL)){
        printf("Delete Failed for position %d\n", position);
        return false;
    }
    /* Checking if its head node*/
    if(head->data ==position){
        /* We found the data */
        temp = head;
        head = head->next;
        free(temp);
        return true;
    }else{
        p = head->next;
    }
    while(p != NULL){
        if(p->data ==position){
            /* We found the data */
            if(p->next == NULL){
                // means its tail node
                tail = prev;
            }
            temp = p;
            prev->next= p->next;
            free(temp);
            break;
        }else{
            prev = p;
            p = p->next;
        }
    }
    if(p == NULL){
        /* we didn't find the node */
        printf("Delete Failed for position %d\n", position);
        return false;
    }
     return true;
}

void print_node(void){
    node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    
}
int main() {
    // Write C code here
    insert_position(20, 30);
    insert_end(4);
    insert_end(20);
    insert_end(23);
    insert_end(56);
    insert_end(79);
    insert_end(101);
    insert_end(234);
    print_node();
    delete_node(4);
    print_node();
    delete_node(20);
    print_node();
    delete_node(2);
    print_node();
    delete_node(234);
    print_node();
    insert_end(300);
    print_node();
    delete_node(300);
    print_node();
    delete_node(23);
    print_node();
    insert_position(20, 56);
    print_node();
    insert_position(62, 79);
    print_node();
    insert_position(92, 101);
    print_node();
    delete_node(92);
    print_node();
    return 0;
}
