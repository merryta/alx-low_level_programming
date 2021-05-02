#include <lists.h>

/**
 * size_t print_dlistint - print all elements
 *@h: opinter to strcture
 *Return: the number of nodes
 */
size_t print_dlistlint(const dlistint_t *h)
{
  const dlistint_t *tmp = NULL;
  size_t i = 0;

  if (h == 0)
      return ('/0');
  tmp = h;
  while (tmp)
    {
      printf("%d\n", tmp->);
      tmp = tmp->next;
      i++;
    }
  return(i);
}
