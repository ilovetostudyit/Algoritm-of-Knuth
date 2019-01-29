/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:44:42 by ehaggon           #+#    #+#             */
/*   Updated: 2019/01/29 15:49:32 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_sqrmin(int sq)
{
	int min;

	min = 0;
	while((min * min) < sq)
	{
		min++;
	}
	return(min);
}

int min_square(char vd[8][8])
{
	int sq;
	int x;
	int y;

	sq = 0;
	x = 0;
	y = 0;
	while (x < 8)
	{
		while (y < 4)
		{
			if (vd[x][y] == '1')
				sq++;

			y++;
		}
		y = 0;
		x++;
	}
	sq = ft_sqrmin(sq);
	return(sq);
}


