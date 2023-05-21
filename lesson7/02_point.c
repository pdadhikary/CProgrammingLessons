#include <stdio.h>
#include <stdlib.h>

struct Point {
    double x;
    double y;
};


double montecarlo_simulation(int);

int main() {
    printf("Pi estimation using MonteCarlo Simulation is: %.5f\n", montecarlo_simulation(0xFFFFFF));
    return 0;
}

double montecarlo_simulation(int num_trials) {
    int num_sucesses = 0;
    for(int i = 0; i < num_trials; i++) {
        // Throw a random dart
        struct Point *p = malloc(sizeof(struct Point));
        p->x = (double) rand() / (double) RAND_MAX;
        p->y = (double) rand() / (double) RAND_MAX;

        if (p->x*p->x + p->y*p->y <= 1.0f) num_sucesses++;
    }

    return 4.0f * (double) num_sucesses / (double) num_trials;
}