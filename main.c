//
// Created by david on 05.11.19.
//

#include <stdio.h>

int* vratSrackySlabyho() {
    int srackySlabyho[10];
    srackySlabyho[0] = 1;
    srackySlabyho[1] = 2;
    srackySlabyho[2] = 4;
    srackySlabyho[3] = 8;
    srackySlabyho[4] = 16;
    return &srackySlabyho;
}

void main() {
    int* srackySlabyho = vratSrackySlabyho();
    printf("sracka slabyho c. 4 je %d", &srackySlabyho[4]);

    printf("mazuch ma zucc\n");

    printf("starek good");
    printf("strihavka zid");
}