/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:29:33 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/07 23:11:46 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itoa(int index, char *str, int final);

int		ft_check_str(char *str);

void	ft_putstr(char *str);

int		ft_size_number(int final);

void	ft_print_combn(int n)
{
	int		final;
	int		index;
	char	str[10];
	int		check;

	index = 0;
	final = 9;
	check = 0;
	if (n <= 0 || n >= 10)
		return ;
	while (index++ < n - 1)
		final = final * 10;
	index = 0;
	while (index < final)
	{
		ft_itoa(index, str, final);
		if (ft_check_str(str))
		{
			if (check)
				write(1, ", ", 2);
			ft_putstr(str);
			check = 1;
		}
		index++;
	}
}

void	ft_itoa(int index, char *str, int final)
{
	int	i;
	int	end;

	i = 0;
	end = ft_size_number(final);
	while (end > 0)
	{
		if (end >= 10)
		{
			str[i] = (index / end) + '0';
			index = index - (end * (index / end));
			end /= 10;
		}
		else
		{
			str[i] = index % 10 + '0';
			end--;
		}
		i++;
	}
	str[i] = '\0';
}

int	ft_check_str(char *str)
{
	int		i;
	char	n;
	int		cont;

	cont = 0;
	n = '0';
	i = 0;
	while (n <= '9')
	{
		while (str[i])
		{
			if (str[i] == n)
				cont++;
			if (cont > 1)
				return (0);
			i++;
		}
		cont = 0;
		i = 0;
		n++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i += 1;
	}
}

int	ft_size_number(int final)
{
	int	unity;

	unity = 1;
	while (final > 0)
	{
		final = (final - 9) / 10;
		unity *= 10;
	}
	return (unity / 10);
}
