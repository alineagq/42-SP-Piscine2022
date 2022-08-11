/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:25:05 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/11 19:50:54 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnonalpha(char c)
{
	if (c < 48)
		return (1);
	else if (c > 57 && c < 65)
		return (1);
	else if (c > 90 && c < 97)
		return (1);
	else if (c == 127)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] -= 32;
			else if (ft_isnonalpha(str[i - 1]))
				str[i] -= 32;
		}
		else if (str[i] >= 65 && str[i] <= 90)
			if (!(ft_isnonalpha(str[i - 1])) || i != 0)
				str[i] += 32;
		i++;
	}
	return (str);
}
