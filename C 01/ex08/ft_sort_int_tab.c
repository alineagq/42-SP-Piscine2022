/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:25:12 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/10 23:37:02 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			swap = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		i++;
	}
}
