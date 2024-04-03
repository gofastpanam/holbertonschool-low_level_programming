#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/* Structure definition moved to main.c */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* Function prototype */
size_t print_list(const struct list_s *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
