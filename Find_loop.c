
#include<stdio.h>
#include<stdlib.h>

struct car {
     char *name;
     char *segment;
     int milage;
     float power;
     struct car *next;
};


 struct car *HEAD = NULL;


void append(struct car *node)
{
        struct car *s1 = NULL;

        s1 = HEAD;

        if (s1 == NULL) {
            HEAD = node;
	}
        else {
                while (s1->next != NULL) {
                        s1 = s1->next;
                }
                s1->next = node;
             }
          
}

/*
void traverse(void)
{
        struct car *s1 = NULL;

        s1 = HEAD;

        while (s1 != NULL) {
                printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);
                s1 = s1->next;
        }

}
*/

void find_loop(void)
{
	struct car *s1 = NULL;

	struct car *s2 = NULL;

	int find_loop ;

	s1 = HEAD;

	while(s1 != NULL)
	 {
		 s2 = HEAD;

		while(s2 != s1){

		  s2 = s2->next;

		  if(s1->next = s2)
		  {
		       find_loop = 1;
		       break;
		  }

		}

		if(find_loop == 1)
		break;

		s1 = s1->next;
	  
	  }

	   if(find_loop == 1)
	    { 
	      printf(" Loop existed");
	    }
	   else
	    {
              printf("No loop existed");
            }	   
     
}



int main()
{
        struct car *s1 = NULL;
        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "Honda city";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 80;
        s1->next = NULL;
        append(s1);

	struct car *s2 = NULL;
        s2 = (struct car *)malloc(sizeof(struct car));
        s2->name = "Tata nexon";
        s2->segment = "Hatch Back";
        s2->milage = 24;
        s2->power = 87;
        s2->next = NULL;
        append(s2);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "maruthi";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;
        append(s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "kia";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 75;
        s1->next = NULL;
        append(s1);

        s1->next = s2;

	find_loop();
}
