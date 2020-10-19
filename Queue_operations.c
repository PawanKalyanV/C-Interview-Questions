
/* queue operations such as insert delete traverse */

#include<stdio.h>
#include<stdlib.h>

#define CAPACITY 5

int queue[CAPACITY];
int front=0;
int rear=0;
int ele;
void insert(int);
void delete();
void traverse();

void main()
{
	int ch;

	while(1)
          {

        	printf("\n1.insert\n");
		printf("2.delete\n");
		printf("3.traverse\n");
		
		printf("Enter the choice:");
		scanf("%d",&ch);


	    switch(ch)
		{
                  
                  case 1:
			printf("\nEnter the element:");
			scanf("%d",&ele);
			insert(ele);
			break;

                  case 2:
			delete();
			break;

                  case 3:
			traverse();
			break;

		  default:exit(0);
		
		}
	   }

}

void insert(int ele)
{
	if(CAPACITY == rear)
	   {
        
	       printf("\nThe queue is full");
	   }
	else
	   {
		int ele;
            
		queue[rear] = ele;

		rear++;
	      
	   }

}


void delete()
{

	if(front == rear)
	   {
	
                printf("\nThe queue is empity\n");

	   }
	else
	   {

		printf("\nElement deleted in queue %d\n", queue[front]);

		for(int i=0; i<rear-1; i++){
		
		queue[i] = queue[i+1];
	
		}
		rear--;
	   }
}

void traverse()
{
	if(front == rear)
	{
         
         printf("\nThe queue is empity\n");
	
	}
	else
	{
		printf("\nElements in queue\n");

		for(int i=front; i<rear; i++){

			printf("%d\n",queue[i]);
		}
	}

}

