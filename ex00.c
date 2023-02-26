/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojilee <woojilee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:51:05 by woojilee          #+#    #+#             */
/*   Updated: 2023/02/12 18:12:59 by woojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_type(int x, int y, int curx, int cury)
{
	if ((curx == 0 && cury == 0) || (curx == 0 && cury == y))
		return ('A');
	if ((curx == x && cury == 0) || (curx == x && cury == y))
		return ('C');
	if ((curx == 0) || (curx == x) || (cury == 0) || (cury == y))
		return ('B');
	return (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar(ft_type(x - 1, y - 1, j, i));
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}