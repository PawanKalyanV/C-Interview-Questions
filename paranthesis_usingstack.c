
/* paranthesis checker using stack */

#include<stdio.h>
#include<stdlib.h>

struct stack{

	char c;

	struct stack *next;
};

struct stack *HEAD = NULL;




void push(struct stack *newNode)
{
        char c;

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
}



 int main()
{

FILE *fp;

char c, c2;

  fp = fopen ("/home/pavankalyan/myprograms/Stackusing_linkedlist.c", "r");

  while((c = fgetc(fp)) != EOF)
  {

   if( c == '{' || c == '[' || c == '(' ){
	  
	   push(c);
     }   
   
   if(c == '}'){

	c2 =  pop();
     }
    
   if(c == '['){

       c2 = pop();
     }
   
   if(c == ')'){

       c2 = pop();
     }
  
    
      if( c =='{' && c2 =='}')
	      printf("Braces matched");

      if(c =='(' && c2 ==')')
	      printf("paranthesis matched");
		   
      if(c =='[' && c2 ==']')
	      printf("brackets matched");
     
  
  }
}
