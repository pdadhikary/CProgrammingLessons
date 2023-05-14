#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define BUFFER 10

int main() {
    int num_participants = 0;
    char** rsvp = malloc(sizeof(char *) * SIZE);

    char *participant_name = malloc(sizeof(char) * BUFFER);
    fgets(participant_name, BUFFER, stdin);

    while(strcmp(participant_name, "quit\n") != 0) {
        rsvp[num_participants] = participant_name;
        num_participants++;

        participant_name = malloc(sizeof(char) * BUFFER);
        fgets(participant_name, BUFFER, stdin);
    }

    printf("%d participants signed up\n", num_participants);
    
    for (int i = 0; i < num_participants; i++) {
        printf("[%02d]. %s", i, rsvp[i]);
    }

    return 0;
}