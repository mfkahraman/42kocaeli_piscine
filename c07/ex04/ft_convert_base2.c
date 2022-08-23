/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:24:15 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/12 01:07:56 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

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

int	isbasevalid(char *base)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (len < 2)
		return (0);
	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == '+' || base[i] == '-' || base[i] == 127)
			return (0);
		while (base[j] != '\0')
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

int	firstintandsign(char *str, long int *p_i)
{
	long int	i;
	long int	sign;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*p_i = i;
	return (sign);
}

char	base_alphabet(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (c == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	len;
	long int	sign;
	long int	i;
	long int	nb;
	long int	plus;

	len = checksize(base);
	if (isbasevalid(base) == 1)
	{
		sign = firstintandsign(str, &i);
		plus = base_alphabet(str[i], base);
		nb = 0;
		while (plus != -1 && str[i] != '\0')
		{
			nb = (nb * len) + plus;
			i++;
			plus = base_alphabet(str[i], base);
		}
		return (nb * sign);
	}
	return (0);
}
