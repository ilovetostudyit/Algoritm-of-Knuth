/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 17:48:25 by ehaggon           #+#    #+#             */
/*   Updated: 2019/01/29 17:06:41 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int ft_check(char fd[8][8], int x, int y)
{
	int a;

	a = 0;
	if (fd[x - 1][y] && fd[x - 1][y] == '1')
		a++;
	if (fd[x + 1][y] && fd[x + 1][y] == '1')
		a++;
	if (fd[x][y - 1] && fd[x][y - 1] == '1')
		a++;
	if (fd[x][y + 1] && fd[x][y + 1] == '1')
		a++;
	return(a);
}

int ft_validation(char fd[8][8], int x)
{
	int y;
	int a;
	int b;
	int c;

	y = 0;
	a = 0;
	b = 0;
	c = x + 4;
	while (x < c)
	{
		while (y < 4)
		{
			if (fd[x][y] == '1')
			{
				a = a + ft_check(fd, x, y);
				b++;
			}
			y++;
		}
		y = 0;
		x++;
	}
	if ((b == 4) && ((a == 6) || (a == 8)))
		return(1);
	return(0);
}
