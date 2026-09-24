
#include <stdio.h>
#include <string.h>

typedef struct
{
	char	*key;
	char	*value;
} Pair;

typedef struct Node
{
	Pair data;
	struct Node *next;
} Node;

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return(0);
		i++;
	}
	return (s1[i] - s2[i]);
}

// IMPORTANT FUNCTION

char	*find_value(Node *head, char *searched_key)
{
	Node *current = head;

	while (current != NULL)
	{
		if (ft_strcmp(current->data.key, searched_key) == 0)
			return (current->data.value);
		current = current->next;
	}
	return (NULL);
}

// IMPORTANT FUNCTION END

int	main(void)
{
	Node node1 = {
		.data = {"10", "ten"},
		.next = NULL
	};

	Node node2 = {
		.data = {"20", "twenty"},
		.next = NULL
	};

	Node node3 = {
		.data = {"30", "dreißig"},
		.next = NULL
	};

	Node node4 = {
		.data = {"40", "fourty"},
		.next = NULL
	};

	Node node5 = {
		.data = {"50", "fifty"},
		.next = NULL
	};


	// Link the linked list
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;

	// define Head
	Node *head = &node1;

	// Loop through list
	Node *current = head;

	printf("%s\n", find_value(head, "10"));
	printf("%s\n", find_value(head, "20"));
	printf("%s\n", find_value(head, "30"));
	printf("%s\n", find_value(head, "40"));
	printf("%s\n", find_value(head, "50"));
	printf("%s\n", find_value(head, "60"));
	return (0);
}
