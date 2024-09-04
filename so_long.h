#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "mlx/mlx.h"

# define DIM 48
# define W_KEY 13
# define A_KEY 0
# define S_KEY 1
# define D_KEY 2
# define ESC_KEY 53

typedef struct	s_matrix
{
	char			*line;
	struct s_matrix	*next;
	struct s_matrix	*prev;
}	t_matrix;

#endif