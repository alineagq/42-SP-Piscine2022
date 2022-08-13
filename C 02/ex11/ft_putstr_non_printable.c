/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:20:26 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/13 03:09:11 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HEX "0123456789abcdef"

int	ft_str_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!(ft_str_is_printable(*str)))
		{
			if (*str < 16)
			{
				write(1, "\\", 1);
				write(1, "0", 1);
				write(1, &HEX[*str % 16], 1);
			}
			if (*str >= 16)
			{
				write(1, "\\", 1);
				write(1, &HEX[*str / 16], 1);
				write(1, &HEX[*str % 16], 1);
			}
		}
		else
			write(1, &(*str), 1);
		*str++;
	}
}
