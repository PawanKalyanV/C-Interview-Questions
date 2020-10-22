
/* paranthesis checker using stack */

#include<stdio.h>
#include<stdlib.h>

struct stack{

	char c;

	struct stack *next;
};

struct stack *HEAD = NULL;


void push(char c)
{
        struct stack *newNode;

        newNode = (struct stack *)malloc(sizeof(struct stack));

	newNode->c = c;

        newNode->next = HEAD;

        HEAD = newNode;
}


int pop()
{
        struct stack *s1 = NULL;

	char c1;

        s1 = HEAD;

        HEAD = HEAD->next;

        c1 = s1->c;

        free(s1);

	return c1;

	if(HEAD == NULL){
	return '#';
	}
}



int main()
{

FILE *fp;

char c, c2;

  fp = fopen ("/home/pavankalyan/C-Interview-Questions/new.c", "r");

  while((c = fgetc(fp)) != EOF)
  {

   if( c == '{' || c == '[' || c == '(' ){
	  
	   push(c);
     }   
   
      if( c == '}' ){

	c2 =  pop();

	if(c2 != '{'){

		printf("Unbalanced");
		return 0;
	 } 
      }
    
      if( c == ']' ){

       c2 = pop();

       if(c2 != '['){

                printf("Unbalanced");
                return 0;

        } 
      } 
   
      if( c == ')' ){

       c2 = pop();

       if(c2 != '('){

                printf("Unbalanced");
                return 0;
          }
      }

  }

}
