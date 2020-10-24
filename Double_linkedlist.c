
/* double linkedlist */

#include<stdio.h>
#include<stdlib.h>

struct node{

	char *name;
        char *segment;

	struct node *prev;

	struct node *next;


};

struct node *HEAD = NULL;

struct node *TAIL = NULL;


void append(struct node *new)
{

	struct node *s1;

	struct node *temp;

	s1 = (struct node*)malloc(sizeof(struct node));

        s1->prev = NULL;

	s1->next = NULL;

	if(HEAD == NULL){

		HEAD = s1;
	}
	else{
		temp = s1;

		while(temp->next != NULL){

			temp = temp->next; 
		}

		temp->next = s1;
		s1->prev = temp;
	}
}

void forward_traverse()
{
	struct node *s1 ;

	s1 = HEAD;

       while(s1 != NULL){

	       printf("%s %s",s1->name,s1->segment);

	       s1 = s1->next;

       }
}


void reverse_traverse()
{
       struct node *s1 ;

       s1 = TAIL;

       while(s1 != NULL){

               printf("%s %s",s1->name,s1->segment);

               s1 = s1->prev;
       }
}


void add(struct node *newNode,int pos)
{

        struct node *s1 = NULL;

        struct node *prev = s1;

        prev = HEAD;

        s1 = HEAD;

        for (int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = newNode;
        newNode->next = s1;
        
	newNode->prev = prev;
	s1->prev = newNode;

}

void delete(int pos)
{
        struct node *s1 = NULL;

        struct node *prev;

        prev = HEAD;

        s1 = HEAD;

        for(int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = s1->next;
        free(s1);
}


int main()
{
        struct node *s1 = NULL;
        s1 = (struct node *)malloc(sizeof(struct node));
        s1->name = "Honda city";
        s1->segment = "suv";
      
        append(s1);

        s1 = (struct node *)malloc(sizeof(struct node));
        s1->name = "Tata nexon";
        s1->segment = "Hatch Back";
     
        append(s1);

        s1 = (struct node *)malloc(sizeof(struct node));
        s1->name = "maruthi";
        s1->segment = "suv";
     
        append(s1);

        s1 = (struct node *)malloc(sizeof(struct node));
        s1->name = "kia";
        s1->segment = "suv";
        
        append(s1);


        add(s1,2);

	delete(3);

	forward_traverse();

	reverse_traverse();

}

