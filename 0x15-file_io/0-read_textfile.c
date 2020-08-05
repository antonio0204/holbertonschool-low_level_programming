#include "holberton.h"
/**
* read_textfile - reads a text file
* @filename: const char
* @letters: int
* Return: int
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t b, c;
	char *size;

	if (!filename)
	{
		return (0);
	}
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	size = malloc(sizeof(char) * (letters));
	if (!size)
	{
		return (0);
	}
	b = read(a, size, letters);
	c = write(STDOUT_FILENO, size, b);
	close(a);
	free(size);
	return (c);
}
