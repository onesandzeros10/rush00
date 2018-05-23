/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 22:57:03 by dahernan          #+#    #+#             */
/*   Updated: 2018/05/22 22:57:18 by dahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_putchar(char c);

void			rush_putchar(int j, int i, int x, int y)
{
	if ((j == 0) && (i == 0 || i == x - 1))
	{
		ft_putchar('A');
	}
	else if ((j == y - 1) && (i == 0 || i == x - 1))
	{
		ft_putchar('C');
	}
	else if ((j == 0 || j == y - 1) && (i > 0 && i < x - 1))
	{
		ft_putchar('B');
	}
	else if ((j > 0 && j < y - 1) && (i == 0 || i == x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void			rush(int x, int y)
{
	int i;
	int j;

	j = -1;
	while (++j < y)
	{
		i = -1;
		while (++i < x)
		{
			rush_putchar(j, i, x, y);
		}
		ft_putchar('\n');
	}
}
