
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

void append(struct car *head,struct car *node)
{
        struct car *s1 = NULL;

        s1 = head;

        if (s1 == NULL) {
            head = node;
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

	struct car *head;

        s1 = head;

        while (s1 != NULL) {
                printf("%s %s %d %f\n", s1->name, s1->segment, s1->milage, s1->power);
                s1 = s1->next;
        }

}

void add(struct car *head,struct car *newNode,int pos)
{

        struct car *s1 = NULL;

        struct car *prev = s1;

        prev = head;

        s1 = head;

        for (int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = newNode;
        newNode->next = s1;
}


  void delete(struct car *head,int pos)
{
        struct car *s1 = NULL;

        struct car *prev;

        prev = head;

        s1 = head;

        for(int i=1; i<pos; i++) {
                prev = s1;
                s1 = s1->next;
        }
        prev->next = s1->next;
        free(s1);
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
        append(HEAD,s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "Tata nexon";
        s1->segment = "Hatch Back";
        s1->milage = 24;
        s1->power = 87;
        s1->next = NULL;
        append(HEAD,s1);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "maruthi";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;
        append(HEAD,s1);
      
	s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "bmw";
        s1->segment = "suv";
        s1->milage = 21;
        s1->power = 78;
        s1->next = NULL;

        add(HEAD,s1,2);

        s1 = (struct car *)malloc(sizeof(struct car));
        s1->name = "altroz";
        s1->segment = "suv";
        s1->milage = 20;
        s1->power = 75;
        s1->next = NULL;

        add(HEAD,s1,2);

        delete(HEAD,2);
 
        traverse();
}









