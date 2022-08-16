/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:11:27 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/16 02:24:28 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

void	ft_all(unsigned int num, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;

	if (nbr < 0)
	{
		ft_putchar('-');
		num = -nbr;
		ft_all(num, base);
	}
	else
		ft_all(nbr, base);
}

void	ft_all(unsigned int num, char *base)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (num >= len)
	{
		ft_all(num / len, base);
	}
	write(1, &base[num % len], 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
