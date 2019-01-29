/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:13:26 by ehaggon           #+#    #+#             */
/*   Updated: 2019/01/29 17:04:51 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int form_validation(char vd[8][8])
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
			if (vd[x][y] == '0')
				y++;
			if (vd[x][y] == '1')
			{
				/*
				(1)
				1111
				0000
				0000
				0000
				*/
				if(vd[x][y+1] == '1' && vd[x][y+2] == '1' && vd[x][y+3] == '1')
					return(1);
				/*
				(2)
				1000
				1000
				1000
				1000
				*/
				if(vd[x+1][y] == '1' && vd[x+2][y] == '1' && vd[x+3][y] == '1')
					return(2);
				/*
				(3)
				0000
				0111
				0001
				0000
				*/
				if(vd[x][y+1] == '1' && vd[x][y+2] == '1' && vd[x+1][y+2] == '1')
					return(3);
				/*
				(4)
				0000
				0111
				0100
				0000
				*/
				if(vd[x][y+1] == '1' && vd[x][y+2] == '1' && vd[x+1][y] == '1')
					return(4);
				/*
				(5)
				0000
				0110
				0100
				0100
				*/
				if(vd[x+1][y] == '1' && vd[x+2][y] == '1' && vd[x][y+1] == '1')
					return(5);
				/*
				(6)
				0000
				0100
				0100
				0110
				*/
				if(vd[x+1][y] == '1' && vd[x+2][y] == '1' && vd[x+2][y+1] == '1')
					return(6);
				/*
				(7)
				0000
				0100
				0111
				0000
				*/

				if(vd[x][y+1] == '1' && vd[x][y+2] == '1' && vd[x+1][y+1] == '1')
					return(7);
				/*
				(7)
				0000
				0111
				0010
				0000
				*/
				if(vd[x][y+1] == '1' && vd[x][y+2] == '1' && vd[x+1][y+1] == '1')
					return(7);
				/*
				(8)
				0000
				0100
				0110
				0100
				*/
				if(vd[x+1][y] == '1' && vd[x+2][y] == '1' && vd[x+1][y+1] == '1')
					return(8);
				/*
				(9)
				0000
				0100
				1100
				0100
				*/
				if(vd[x+1][y] == '1' && vd[x+2][y] == '1' && vd[x+1][y-1] == '1')
					return(9);
					/*
				(10)
				0000
				0100
				1110
				0000
				*/
				if(vd[x+1][y-1] == '1' && vd[x+1][y] == '1' && vd[x+1][y+1] == '1')
					return(10);

			}
			y++;
		}
		y = 0;
		x++;
	}
	return(0);
}
