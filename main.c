int main(int ac, char **av)
{
	int	fd;

	if (ac != 3)
		error_exit(0);
	if (format_check(av[1]) == 0)
		error_exit(1);
	fd = open(av[1], O_RDONLY);
		error_exit(2);
}
