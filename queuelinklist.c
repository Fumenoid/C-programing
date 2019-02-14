#include<stdio.h>
#include<stdlib.h>
int count=0;


struct node
{
 int no;
 struct node *next;
}*new, *first=NULL, *ptr;





void get_element()
{
 new = (struct node*) malloc(sizeof(struct node)); //DMA
 printf("New Address: %p\n", new);
 printf("Enter data to insert: ");
 scanf("%d", &new->no);
 //Get data
 new->next=NULL;
}

void insert_end()
{
get_element();
//create node
count = count+1;
if(first==NULL) first=new;
//Head node
else
{
for(ptr=first; ptr->next!=NULL; ptr=ptr->next); //traverse
ptr->next=new;
//link nodes
}
printf("Element inserted in End of List\n");
}


void create_list()
{
 int i;
 int n;
 printf("Enter the number of elements to be inserted: ");
 scanf("%d", &n);
 count = count+n;
 for(i=1; i<=n; i++)
  {
  insert_end();
  }
}



void display()
{
if(first==NULL) printf("List is empty\n");
//check for underflow
else
{
printf("\nNo. of elements in List: %d\n", count);
for(ptr=first; ptr!=NULL; ptr=ptr->next)
//Traverse list
printf("Block Address:%p, Data: %d, Next: %p\n", ptr, ptr->no, ptr->next);
}
}



void insert()
//Menu for Insertion
{
int choice;
printf("\nElements to Insert.....Enter 1(for single element), 2(for multiple element)");
scanf("%d", &choice);
switch(choice)
{
case 1: insert_end(); break;
case 2: create_list(); break;
default: printf("Wrong Choice\n");
}
}


void delete_begin()
{
if(first->next==NULL) first=NULL;
//When List has one node
else
{
ptr=first->next;
//swap the node
first=ptr;
}
count = count-1;
printf("Element is Deleted from Start of List\n");
}


int main()
{
int choice;
L1: printf("\nEnter 1(Insert), 2(Delete), 3(Display), 4(Exit): ");
scanf("%d", &choice);
switch(choice)
{
case 1: insert(); goto L1;
case 2: delete_begin(); goto L1;
case 3: display(); goto L1;
case 4: break;
default: printf("Wrong Choice\n"); goto L1;
}
return 0;
}

