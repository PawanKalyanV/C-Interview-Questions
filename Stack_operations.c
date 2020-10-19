
/* stack operations like push pop peek traverse */

#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 6

int stack[CAPACITY];
int top=-1;
int ele;
int isEmpity();
int isFull();
void push();
int pop();
void peek();
void traverse();

int main()
{
	int ch,ele;

	while(1)
	{
	printf("1.push\n 2.pop\n 3.peek\n 4.traverse\n5.quit");

	printf("Enter the choice:");
	scanf("%d",&ch);
	}

   switch(ch)
     {
      case1: printf("enter the element:");
             scanf("%d",&ele);
	     push(ele);
	     break;

      case2: ele = pop();
	     if(ele == 0)
	     {
	       printf("stack is underflow");
	     }
	     pop();
	     break;
      case3:
	     peek();
	     break;
      case4:
	     traverse();
	     break;
      case5: exit(0);
	     default:printf("invalid input\n");

     }
}

void push(int ele)
{
	if(isFull()){

	   printf("the stack is full");
	}
	else{
          top++;
          stack[top] = ele;
	  printf("element is incerted\n");

	 }


        int isFull(){

	   if(top == CAPACITY-1){
	       return 1;
	   }
	   else
	       return 0;
        }
}


int pop()
{
	if(isEmpity()){

	  printf("the stack is empity\n");
		
	}
      else{
	  return stack[top];
	  --top;
	  printf("element deleted from stack");
      }	
      

           int isEmpity(){

	     if(top == -1){
		     return 1;
	     }
	     else
		     return 0;
       }
}


void peek()
{
        if(isEmpity() == 1){
	printf("the stack is empity");
	}
	else
	 {
	  printf("%d",top);
	 }
	
}


void traverse()
{
	if(isEmpity() == 1){
		printf("stack is empity");
	}
	else{

	printf("the stack elements:");

	for(int i=0; i<=top; i++){
		printf("%d",stack[i]);
	  }
	}
}

