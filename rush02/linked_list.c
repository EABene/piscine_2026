/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsandler <bsandler@student.42vienna.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 16:27:56 by bsandler          #+#    #+#             */
/*   Updated: 2026/08/30 17:40:02 by bsandler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct	node {
	int	value;
	struct	node *next;
};
typedef struct node node_t;

void	printlist(node_t *head)
{
	node_t *temporary = head;

	while (temporary != NULL)
	{
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}

node_t *create_new_node(int value)
{
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return (result);
}


int	main(void)
{
	node_t *head;
	node_t *tmp;


	tmp = create_new_node(32);
	head = tmp;
	tmp = create_new_node(33);
	tmp->next = head;
	head = tmp;
	tmp = create_new_node(34);
	tmp->next = head;
	head = tmp;

	printlist(head);

	return (0);
}
