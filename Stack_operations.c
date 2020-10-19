

/* stack operations like push pop peek traverse */

#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 6

int stack[CAPACITY];
int top=-1;
int ele;
int isEmpity(void);
int isFull(void);
void push(int);
int pop(void);
void peek(void);
void traverse(void);

int main()
{
	int ch,ele;

	while(1)
	{
	printf("\n1.push\n");
	printf("2.pop\n");
	printf("3.peek\n");
	printf("4.traverse\n");
	printf ("5.quit\n");

	printf("\nEnter the choice:");
	scanf("%d",&ch);
	

   switch(ch)
     {
      case 1:
	     printf("\nEnter the element:");
             scanf("%d",&ele);
	     push(ele);
	     break;

      case 2: 
	     ele = pop();

	     if(ele == 0)
	     {
	        printf("\nstack is underflow\n");
	     }
	     else
	     {
	        printf("\nThe element is popped %d\n",ele);
	     }
	     break;
      
      case 3:
	     peek();
	     break;
     
      case 4:
	     traverse();
	     break;
      
      case 5: 
	     exit(0);
      
      default: printf("\ninvalid input\n");

     }
  }
}

void push(int ele)
{
   

	if(isFull() == 1){

	   printf("\nThe stack is full\n");
	}
	else{

          top++;
          stack[top] = ele;
	  printf("\nElement %d is incerted\n",ele);

	 }
   
}


int pop()
{
    
	if(isEmpity() == 1){

	  printf("\nThe stack is empity\n");
		
	}
       else{

	  return stack[top--];
	 // --top;
      }
       
         
}

void peek()
{

	   if(isEmpity() == 1){

	    printf("\nThe stack is empity\n");

	  }
	else
	 {
	  printf("\npeek of stack is %d",stack[top]);
	 }

}


void traverse()
{
   
	if(isEmpity() == 1){

		printf("\nstack is empity\n");
	}
	else{

	       printf("\nThe stack elements: ");

        	for(int i=0; i<=top; i++){

		printf("%d ",stack[i]);

	   }
	}
}


      int isFull(){

           if(top == CAPACITY-1){
               return 1;
           }
           else{
               return 0;
           }
         }
	   
       int isEmpity(){

             if(top == -1){
                    return 1;
             }
             else{
                    return 0;
             }
         }
     
