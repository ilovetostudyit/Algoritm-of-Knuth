/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:52:02 by ehaggon           #+#    #+#             */
/*   Updated: 2019/01/29 17:05:18 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validation/validation.c"
#include "min_square.c"
#include "algorithm/form_validation.c"
int main(int argv, char **argc)
{
	char fd[8][8];
	int	n;

	n = 0;
	fd[0] [0] = '1';
	fd[0] [1] = '1';
	fd[0] [2] = '1';
	fd[0] [3] = '0';
	fd[0] [4] = '\0';

	fd[1] [0] = '0';
	fd[1] [1] = '0';
	fd[1] [2] = '0';
	fd[1] [3] = '0';
	fd[1] [4] = '\0';

	fd[2] [0] = '1';
	fd[2] [1] = '0';
	fd[2] [2] = '0';
	fd[2] [3] = '0';
	fd[2] [4] = '\0';

	fd[3] [0] = '0';
	fd[3] [1] = '0';
	fd[3] [2] = '0';
	fd[3] [3] = '0';
	fd[3] [4] = '\0';

	fd[4] [0] = '1';
	fd[4] [1] = '1';
	fd[4] [2] = '1';
	fd[4] [3] = '0';
	fd[4] [4] = '\0';

	fd[5] [0] = '1';
	fd[5] [1] = '0';
	fd[5] [2] = '0';
	fd[5] [3] = '0';
	fd[5] [4] = '\0';

	fd[6] [0] = '0';
	fd[6] [1] = '0';
	fd[6] [2] = '0';
	fd[6] [3] = '0';
	fd[6] [4] = '\0';

	fd[7] [0] = '0';
	fd[7] [1] = '0';
	fd[7] [2] = '0';
	fd[7] [3] = '0';
	fd[7] [4] = '\0';

	fd[8][0] = '\0';
	printf("%d\n", min_square(fd));
	while (fd[n][0] == '0' || fd[n][0] == '1')
	{
		if (ft_validation(fd, n) == 1)
		{
			printf("%s\n", "Valid figure!");
			printf("form of figure = %d\n", form_validation(fd));
		}
		else
		{
			printf("%s\n", "Awfull creature");
		//	printf("%s\n", fd[n]);
		}
		n = n + 4;
	}
	return(0);
}
