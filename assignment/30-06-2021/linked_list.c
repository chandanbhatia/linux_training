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
    node *new, *temp, *p;
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
    while(p->next != NULL){
        if(p->next->data ==position){
            new->next=p->next;
            p->next=new;
            new->data=data;
            break;
        }else{
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
    node *p=head, *temp;
    bool found = false;
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
    }
    
    while(p->next != NULL){
        if(p->next->data ==position){
            /* We found the data */
            if(p->next->next == NULL){
                // means its tail node
                tail = p;
            }
            temp = p->next;
            p->next= p->next->next;
            free(temp);
            found = true;
            break;
        }else{
            p = p->next;
        }
    }
    if(!found){
        /* we didn't find the node */
        printf("Delete Failed for position %d\n", position);
        return false;
    }
     return true;
}

void print_reverse(node *hNode){
    if(hNode->next!=NULL){
        print_reverse(hNode->next);
    }
    printf("%d ",hNode->data);
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
    
   // print_reverse(head);
    
    return 0;
}
