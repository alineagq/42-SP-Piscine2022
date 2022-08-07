/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 07:06:58 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/07 08:04:07 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundred;
	char	decimal;
	char	unity;

	hundred = '0' - 1;
	while (++hundred <= '9')
	{
		decimal = hundred;
		while (++decimal <= '9')
		{
			unity = decimal + 1;
			while (unity <= '9')
			{
				write(1, &hundred, 1);
				write(1, &decimal, 1);
				write(1, &unity, 1);
				if (hundred != '7' || decimal != '8' || unity != '9')
				{
					write(1, ", ", 2);
				}
				unity++;
			}
		}
	}
}
