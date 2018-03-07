
#include <stdio.h>
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd1;
	//int		fd2;
	int		i;
	char	*line;

	line = NULL;
	i = 0;
	i = 0;
	if (argc < 2)
		exit(0);
	if ((fd1 = open(argv[1], O_RDONLY)) < 0)
		return (-1);
	// if ((fd2 = open(argv[2], O_RDONLY)) < 0)
	// 	return (-1);
	while (get_next_line(fd1, &line) > 0)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
	//while (1);
	return (0);
}