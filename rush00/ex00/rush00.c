/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acepni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:24:04 by acepni            #+#    #+#             */
/*   Updated: 2022/07/23 12:50:35 by acepni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int ln, int clm, int x, int y)
{
	if ((ln == 1 && clm == 1) || (ln == 1 && clm == x)
		|| (ln == y && clm == 1) || (ln == y && clm == x))
		ft_putchar('o');
	else if (ln == 1 || ln == y)
		ft_putchar('-');
	else if (clm == 1 || clm == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	ln;
	int	clm;

	ln = 1;
	while (ln <= y)
	{
		clm = 1;
		while (clm <= x)
		{
			check(ln, clm, x, y);
			clm++;
		}
		ft_putchar('\n');
		ln++;
	}
}
