#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * This program copies the contents of one file to another.
 *
 * @Return: 0
 */

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    FILE *file_from;
    FILE *file_to;
    char buffer[BUFFER_SIZE];
    size_t read_size;

    file_from = fopen(argv[1], "r");
    if (file_from == NULL) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to = fopen(argv[2], "w");
    if (file_to == NULL) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((read_size = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0) {
        if (fwrite(buffer, 1, read_size, file_to) != read_size) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (fclose(file_from) != 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %p\n", (void *) fileno(file_from));
        exit(100);
    }

    if (fclose(file_to) != 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %p\n", (void *) fileno(file_to));
        exit(100);
    }

    return 0;
}

