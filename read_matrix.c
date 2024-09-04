#include "so_long.h"

void	free_ll(t_matrix *m)
{
	t_matrix	*temp;
	t_matrix	*next;

	temp = m;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->line);
		free(temp);
		temp = next;
	}
}

void	append_node(t_matrix *m, t_matrix *new_node)
{
	t_matrix	*temp;

	temp = m;
	while (temp->next != NULL)
		temp = temp->next;
	new_node->next = NULL;
	new_node->prev = temp;
	temp->next = new_node;
}

t_matrix	*get_ll_matrix(int fd)
{
	char		*line;
	t_matrix	*m;
	t_matrix	*new_node;

	m = (t_matrix *)malloc(sizeof(t_matrix));
	if (!m)
		return (NULL);
	line = get_next_line(fd);
	m->line = line;
	m->next = NULL;
	m->prev = NULL;
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (!line)
			return (m);
		new_node = (t_matrix *)malloc(sizeof(t_matrix));
		if (!new_node)
			return (NULL);
		new_node->line = line;
		append_node(m, new_node);
	}
	return (m);
}

char	**get_matrix(int fd)
{
	
}