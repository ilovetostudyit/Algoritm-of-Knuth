#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argv, char **argc)
{
	int i;
	int fd;
	ssize_t ar;
	char *buf;

	buf = malloc(sizeof(char)*6);
	i = 1;
	while(i < argv)
	{
		fd = open(argc[i], O_WRONLY);
		if (fd < 0)
			printf("%s\n", "WRONGFILENAME");
			return(0);
		while (buf > 0)
		{
			ar = read((int)argc[i], buf, 5);
			printf("%zd\n", ar);
		}
		printf("%s\n", argc[i]);
		i++;
		close(fd);
	}
	return(0);
}

