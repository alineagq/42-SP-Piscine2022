/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:20:26 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/13 03:46:06 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			if (*str < 16)
				write(1, "0", 1);
			else
				write(1, &HEX[*str / 16], 1);
			write(1, &HEX[*str % 16], 1);
		}
		else
			write(1, &(*str), 1);
		*str++;
	}
}
