#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leven.h"

#define BUF_SIZE 4096
#define DEFAULT_THRESHOLD 20

int main(int argc, char *argv[]) {
    int threshold = argc ? DEFAULT_THRESHOLD : atoi(argv[1]);
    char line[BUF_SIZE];
    char buf[BUF_SIZE];
    
    while (fgets(line, BUF_SIZE, stdin) != NULL) {
        if (levenshtein(buf, line) > threshold) {
            printf("%s", strcpy(buf, line));
        }
    }
    
    return 0;
}
