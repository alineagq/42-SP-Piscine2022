/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:00:51 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/16 01:16:13 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	count;

	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			count = 0;
			while (to_find[j])
			{
				if (str[j + i] != to_find[j])
					count = 1;
				j++;
			}
			if (count == 0)
				return (str);
		}
		i++;
	}
	return (0);
}
