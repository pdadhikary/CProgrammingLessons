#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 100
#define SIZE 100

struct Person
{
    int id;
    char *name;
    int age;
};

struct Person **rsvp;

int main() {
    rsvp = malloc(sizeof(struct Person*) * SIZE);
    int id = 0;

    while (1)
    {
        char *input = malloc(sizeof(char) * BUFFER);
        fgets(input, BUFFER, stdin);

        if (strcmp(input, "quit\n") == 0) {
            break;
        } else {
            char *name = malloc(sizeof(char) * BUFFER);
            int age;

            sscanf(input, "%s %d\n", name, &age);

            struct Person *p = malloc(sizeof(struct Person)); // Person p = new Person();
        
            p->id = id; // p.id = id
            p->name = name; // p.name = name
            p->age = age;

            rsvp[id] = p;
        }

        id++;
    }

    printf("\nList of people that signed up!:\n");
    for (int i = 0; i < id; i++) {
        struct Person *p = rsvp[i];
        printf("#%04d Name: %-10s %-4d\n", p->id, p->name, p->age);
        free(p);
    }
}