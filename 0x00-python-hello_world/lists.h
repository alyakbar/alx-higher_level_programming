#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
<<<<<<< HEAD
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
=======
 *  * struct listint_s - singly linked list
 *   * @n: integer
 *    * @next: points to the next node
 *     *
 *      * Description: singly linked list node structure
 *       * for Holberton project
 *        */
typedef struct listint_s
{
		int n;
			struct listint_s *next;
>>>>>>> 2ccbbae1df6abe0ff1ef53791c71bdf870fe4d59
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
<<<<<<< HEAD
=======

>>>>>>> 2ccbbae1df6abe0ff1ef53791c71bdf870fe4d59
