
/* stack using linkedlist */

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


void traverse(void)
{
        struct car *s1 = NULL;

        s1 = HEAD;

        while (s1 != NULL) {
                printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);
                s1 = s1->next;
        }

}


void add(struct car *newNode)
{

        struct car *s1 = NULL;


        s1 = HEAD;

        newNode->next = HEAD;

        HEAD = newNode;
}

void delete()
{
        struct car *s1 = NULL;

         s1 = HEAD;

        HEAD = HEAD->next;

        free(s1);
}


void main()
{
        struct car *s1 = NULL;

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "\nHonda city";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 80;
        s1->next = NULL;
        add(s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "\nTata nexon";
        s1->segment = "Hatch Back";
        s1->milage = 24;
        s1->power = 87;
        s1->next = NULL;
        add(s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "\nmaruthi";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;
        add(s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "\nBmw";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;
        add(s1);     

        traverse();

        delete();

        traverse();

      //   delete();

     //   traverse();
}
