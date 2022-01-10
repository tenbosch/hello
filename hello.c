#include <stdio.h>

int main(int argc, char** argv) {
    if (argc > 1) {
        for (int argIndex = 0; argIndex < argc; ++argIndex) {
            printf("\nArgument %d: %s", argIndex, argv[argIndex]);
            if (argIndex == 0) {
                printf(" (app name)");
            }
        }
        printf("\nYou have provided %d additional arguments", argc - 1);
    } else {
        printf("\nYou have not provided any arguments");
    }
    printf("\n\n");
    return 0;
}