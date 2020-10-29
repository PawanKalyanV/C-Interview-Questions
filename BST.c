
/* incertion of nodes in binary search tree */

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
        struct node *right;
};
struct node *HEAD = NULL;

void incert(int val)
{
	struct node *temp;
	struct node *parent;
	struct node *current;

	temp =(struct node*)malloc(sizeof(struct node));

	temp->data = val;
	temp->right = NULL;
	temp->left = NULL;

	parent = HEAD;

	if(HEAD == NULL){
		HEAD = temp;
	}
	else{
		current = HEAD;

	 while(current)  /*Findimg path to know where we have to add new node*/ 
	 {
		 parent = current;

		 if(temp->data > current->data){

			 current = current->right;
		 }
		 else{
			 current = current->left;
		 }
	 }
	 if(temp->data > parent->data){  /* to know where we have to add newnode left or right */

		 parent->right = temp;
	 }
	 else{
		 parent->left = temp; 
	 }
	}
}

int main()
{

	struct node *s1 = NULL;
	s1 =(struct node*)malloc(sizeof(struct node));

	incert(50);
	incert(45);
	incert(70);

}
