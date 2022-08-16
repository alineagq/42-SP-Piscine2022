/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:29:14 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/16 01:29:47 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_all(unsigned int num);

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = -nb;
		ft_all(num);
	}
	else
		ft_all(nb);
}

void	ft_all(unsigned int num)
{
	if (num >= 10)
	{
		ft_all(num / 10);
	}
	ft_putchar(num % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}