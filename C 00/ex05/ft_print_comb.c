/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 07:06:58 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/07 07:42:46 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_value(char c, char d, char u);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0' - 1;
	d = '1' - 1;
	u = '2' - 1;
	while (c++ < '9')
	{
		while (d++ < '9')
		{
			while (u++ < '9')
			{
				check_value(c, d, u);
				u++;
			}
			u = '0';
		}
		d = '0';
	}
}

void	check_value(char c, char d, char u)
{
	if (c != d && d != u && u != c && c < d && d < u)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (! (c == '7' && d == '8' && u == '9'))
			write(1, ", ", 2);
	}
}
