
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
        } else {
                while (s1->next != NULL) {
                        s1 = s1->next;
                }
                s1->next = node;
        }
}

void traverse(void)
{
        struct car *s1 = NULL;

        s1 = HEAD;

        while (s1 != NULL) {
                printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);
                s1 = s1->next;
        }

}

void add(struct car *newNode,int pos)
{

        struct car *s1 = NULL;

        struct car *prev = s1;

        prev = HEAD;

        s1 = HEAD;

        for (int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = newNode;
        newNode->next = s1;
}

/*
  void delete(int pos)
{
        struct car *s1 = NULL;

        struct car *prev;

        prev = HEAD;

        s1 = HEAD;

        for(int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = s1->next;
        free(s1);
}

*/

void middle(void)
{
        struct car *s1 = NULL;

        struct car *prev = s1;

        struct car *temp = HEAD;

        int count = 0;

        int pos = 0;

        while(temp != NULL){
                temp = temp->next;

                count++;
        }

        prev = HEAD;

        s1 = HEAD;

        if(count%2 == 1)
         {
           pos = (count/2)+1;

           for (int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
            }
         }

        else
         {
           pos = (count/2);

        for (int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
            }
         }
         printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);

        if((count%2) == 0){
            s1 = s1->next;
           printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);
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

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "Tata nexon";
        s1->segment = "Hatch Back";
        s1->milage = 24;
        s1->power = 87;
        s1->next = NULL;
        append(s1);

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

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "hundai";
        s1->segment = "Hatch back";
        s1->milage = 26;
        s1->power = 96;
        s1->next = NULL;
        append(s1);

s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "bmw";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;
        add(s1,2);

       // traverse();

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "altroz";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 75;
        s1->next = NULL;
        add(s1,3);

     // traverse();

     s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "hundai";
        s1->segment = "Hatch back";
        s1->milage = 26;
        s1->power = 96;
        s1->next = NULL;
        add(s1,4);

     // traverse();

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "kwid";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 80;
        s1->next = NULL;
        add(s1,2);

        middle();

       // traverse(); 

        /* delete(2);
        traverse();*/
}





























