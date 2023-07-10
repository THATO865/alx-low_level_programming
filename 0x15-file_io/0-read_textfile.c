#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char *buffer;
ssize_t read_chars;

if (filename == NULL)
return (0);

fp = fopen(filename, "r");
if (fp == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

read_chars = fread(buffer, sizeof(char), letters, fp);
if (read_chars == 0)
return (0);

printf("%s", buffer);

fclose(fp);
free(buffer);

return (read_chars);
}

