#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
cpy_file(int fd_src, int fd_dest, char *name_source, char *name_dest);

#endif /* _HOLBERTON_H_ */
