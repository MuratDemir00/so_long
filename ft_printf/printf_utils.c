/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murdemir <murdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:41:48 by murdemir          #+#    #+#             */
/*   Updated: 2023/07/15 19:29:12 by murdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int number)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(number);
	len += ft_putstr(str);
	free(str);
	return (len);
}

int	ft_unintlen(unsigned int number)
{
	int	i;

	i = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

int	ft_putunint(unsigned int number)
{
	int	i;

	i = ft_unintlen(number);
	if (number > 9)
	{
		ft_putunint(number / 10);
		ft_putunint(number % 10);
	}
	else
		ft_putchar(number + '0');
	return (i);
}
