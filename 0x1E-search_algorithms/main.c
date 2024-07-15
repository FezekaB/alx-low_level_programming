#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/* Function to create a new node */
listint_t *create_node(int value, size_t index)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = value;
    new_node->index = index;
    new_node->next = NULL;
    return (new_node);
}

/* Function to append node to the list */
listint_t *append_node(listint_t *head, int value, size_t index)
{
    listint_t *new_node = create_node(value, index);
    if (!new_node)
        return (NULL);

    if (!head)
        return (new_node);

    listint_t *temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    return (head);
}

/* Function to free the list */
void free_list(listint_t *head)
{
    listint_t *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void)
{
    listint_t *list = NULL;
    list = append_node(list, 0, 0);
    list = append_node(list, 1, 1);
    list = append_node(list, 2, 2);
    list = append_node(list, 3, 3);
    list = append_node(list, 4, 4);
    list = append_node(list, 5, 5);
    list = append_node(list, 6, 6);
    list = append_node(list, 7, 7);
    list = append_node(list, 8, 8);
    list = append_node(list, 9, 9);

    size_t size = 10;
    int value = 5;
    listint_t *result = jump_list(list, size, value);

    if (result)
        printf("Value found at index [%zu]\n", result->index);
    else
        printf("Value not found\n");

    free_list(list);
    return (0);
}

