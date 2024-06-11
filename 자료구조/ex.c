#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct man {
        char *name;
        int age;
    }man;

    struct man alice, bob;

    alice.name = (char*)malloc(sizeof(30));
    bob.name = (char*)malloc(sizeof(30));

    strcpy(alice.name, "alice");
    alice.age = 20;
    strcpy(bob.name, "bob");
    bob.age = 22;

    bob = alice;

    // strcpy(bob.name, alice.name);
    // bob.age = alice.age;

    strcpy(alice.name, "alice2");

    printf("Name: %s, Age: %d\n", alice.name, alice.age);
    printf("Name: %s, Age: %d\n", bob.name, bob.age);

    return 0;
}