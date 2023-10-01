#include<stdio.h>
#include<stdlib.h>

#define null 0


struct link {
    int data;           // Data element
    struct link* next;  // Pointer to the next node
};

typedef struct link list;
list *head=null, *p;

void main (){

    add();
    display();

    
}

void add(){
    int op=1;list*t;
    while (op==1)
    {
        p=((list*)malloc(sizeof(list)));
        printf("\nEnter Data To Add: ");
        scanf("%d",&p->data);
        if (head==null){
            head=p;
            p->next=null;
            t=p;
        }
        else{
            t->next=p;
            p->next=null;
            t=p;
        }
        printf("Do you want to add more?");
        scanf("%d",&op);
    }
    }

void display(){
    list *i;
    int c=0;
    for(i=head;i!=null;i=i->next){
        c=c+1;
        printf("\n%d is the data , %d is the node number,and %x is the address",i->data,c,i);

    }
    printf("\n%d is the total number of nodes",c);


}
    


