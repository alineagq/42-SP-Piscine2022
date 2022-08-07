/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:32:43 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/07 08:53:26 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(int number1, int number2);

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = -1;
	while (number1++ <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_print_numbers(number1, number2);
			number2++;
		}
	}
}

void	ft_print_numbers(int number1, int number2)
{
	if (number1 < 10)
	{
		ft_putchar('0');
		ft_putchar(number1 + '0');
	}
	else
	{
		ft_putchar(number1 / 10 + '0');
		ft_putchar(number1 % 10 + '0');
	}
	ft_putchar(' ');
	if (number2 < 10)
	{
		ft_putchar('0');
		ft_putchar(number2 + '0');
	}
	else
	{
		ft_putchar(number2 / 10 + '0');
		ft_putchar(number2 % 10 + '0');
	}
	if (number1 != 98 || number2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
