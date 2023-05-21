#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct Counter {
    int count;
    int step;
    int limit;
};

int main() {
    struct Counter *c = malloc(sizeof(struct Counter)); // Counter c = new Counter();

    printf("Set timer:\n");
    scanf("%d", &c->limit);

    printf("Set Step:\n");
    scanf("%d", &c->step);
    
    printf("\n");

    for (c->count = 0; c->count <= c->limit; c->count += c->step) {
        sleep(c->step);
        printf("%d\n", c->count);
    }

    return 0;
}

