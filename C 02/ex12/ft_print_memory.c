/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 03:47:36 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/16 00:38:27 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdf"

void	print_addr(unsigned long int nb, int k)
{
	k++;
	if (nb >= 16)
		ft_print_addr(nb / 16, k);
	if (k < 16 && nb < 16)
	{
		while (k < 16)
		{
			write(1, "0", 1);
			k++;
		}
	}
	write(1, &HEX[nb % 16], 1);
}

void	print_hex(unsigned long int nb)
{
	write(1, &HEX[nb / 16], 1);
	write(1, &HEX[nb % 16], 1);
}

void	print_value(char *str)
{
	int	k;

	while (*str && k < 16)
	{
		if (*str < 32 || *str == 127)
			write(1, ".", 1);
		else
			write(1, &(*str), 1);
		*str++;
		k++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*str;

	str = (char *)addr;
	i = -1;
	if (size <= 0)
		return (addr);
	while (i++ < size - 1)
	{
		if (i == 0 || i % 15 == 0)
		{
			print_addr(str + i, 0);
			write(1, ": ", 2);
		}
		print_hex(str + i);
		if (i % 2 == 0 && i != 0)
			write(1, " ", 1);
		if (i == size - 2 || i % 15 == 0)
			print_value(str + (i - 15));
	}
	return (addr);
}
