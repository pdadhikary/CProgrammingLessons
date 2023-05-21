#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct Counter {
    int count;
    int limit;
};

int main() {
    struct Counter *c = malloc(sizeof(struct Counter));

    printf("Set timer:\n");
    scanf("%d", &c->limit);
    
    printf("\n");

    for (c->count = 1; c->count <= c->limit; c->count++) {
        sleep(1);
        printf("%d\n", c->count);
    }

    return 0;
}

