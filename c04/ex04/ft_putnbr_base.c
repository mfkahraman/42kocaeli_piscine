/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:24:15 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/02 12:13:29 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checksize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	isbasevalid(char *base, int len)
{
	int	i;
	int	j;

	if (len < 2)
		return (0);
	i = 0;
	j = 1;
	while (base[i] != 0)
	{
		if (base[i] <= ' ' || base[i] == '+'
			|| base[i] == '-' || base[i] == 127)
			return (0);
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ultimate(long nbr, char *base, int len)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= len)
	{
		ultimate(nbr / len, base, len);
		ultimate(nbr % len, base, len);
	}
	if (nbr < len)
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		isvalid;
	long	nb;

	nb = nbr;
	len = checksize(base);
	isvalid = isbasevalid(base, len);
	if (isvalid == 1)
		ultimate(nb, base, len);
}
/*
int	main ()
{
	int	x;
	//char	eight[] = "poneyvif";
	char	ten[] = "0123456789";
	//char	two[] = "01";
	//char	sixteen[] = "0123456789ABCDEF";
	x = 10;
	ft_putnbr_base(-2147483648, ten);
}
*/
