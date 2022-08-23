/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:06:55 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/12 01:07:15 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checksize(char *str);
int		isbasevalid(char *base);
int		firstintandsign(char *str, long int *p_i);
char	base_alphabet(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		lenght_nbr(int nbr, char *base, int lenght);

void	ft_putnbr_baseto(int nbr, char *base, char *finaltab)
{
	int		len_base;
	long	nb;
	int		i;
	int		len_finaltab;

	len_base = checksize(base);
	len_finaltab = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		finaltab[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_finaltab--;
	while (nb >= len_base)
	{
		finaltab[len_finaltab] = base[nb % len_base];
		nb /= len_base;
		len_finaltab--;
	}
	if (nb < len_base)
		finaltab[i] = base[nb];
}

int	lenght_nbr(int nbr, char *base, int lenght)
{
	int				base_lenght;
	unsigned int	nb;

	base_lenght = checksize(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		lenght++;
	}
	lenght++;
	return (lenght);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finaltab;
	int		firstnb;
	int		len_malloc;

	if (isbasevalid(base_to) == 0 || isbasevalid(base_from) == 0)
		return (0);
	firstnb = ft_atoi_base(nbr, base_from);
	len_malloc = lenght_nbr(firstnb, base_to, 0);
	finaltab = (char *)malloc(sizeof(char) * (len_malloc + 1));
	if (!finaltab)
		return (0);
	ft_putnbr_baseto(firstnb, base_to, finaltab);
	finaltab[len_malloc] = '\0';
	return (finaltab);
}
/*
#include <stdio.h>
int main ()
{
    char basefrom[] = "01234567";
    char baseto[] = "1234";
    char  nbr[] = "241";
    printf("%s", ft_convert_base(nbr, basefrom, baseto));
}
*/
