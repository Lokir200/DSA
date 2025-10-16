#include <stdio.h>
#include <conio.h>
#include <alloc.h>

struct node {
	int data;
	struct node* link;
};

struct node* create_node(int x){
	 struct node*new=(struct node*)malloc(sizeof(struct node));
	 new->data=x;
	 new->link=NULL;
	 return new;
}
void ins_beg(struct node** first,int x){
struct node* new=create_node(x);
new->link=*first;
*first=new;
}
void ins_end(struct node* first,int x){
   struct node* new=create_node(x);
   struct node* temp=first;
   while(temp->link!=NULL)
   temp=temp->link;
   temp->link=new;
}
void ins_pos(struct node** first,int pos,int x){
   struct node* new=create_node(x);
   struct node* temp=*first;
   int count=1;
   while(temp->link!=NULL && count<pos-1){
   temp=temp->link;
   count+=1;
   }
   if(temp==NULL){
   printf("not possible");}
   else if(pos==1){
	ins_beg(first,x);
   }
   else{
	new->link=temp->link;
   temp->link=new;
}
}
void display(struct node* first){
 struct node* temp;
 temp=first;
 while(temp!=NULL){
 printf(" %d->",temp->data);
 temp=temp->link;
 }
}
void main(){
 struct node* first=create_node(20);
 clrscr();
 ins_beg(&first,10);
 ins_end(first,30);
 ins_pos(&first,4,60);
 display(first);
 getch();
}