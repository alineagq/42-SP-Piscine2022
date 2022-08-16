/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:31:10 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/16 01:36:37 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	minus;

	num = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
		minus = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			num = num * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (minus * num);
}
