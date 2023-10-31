/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:55:39 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:03:11 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_space(char *s)
{
	int	i;

	i = (int)ft_strlen(s);
	if (i == 0)
		return (0);
	i = -1;
	while (s[++i])
	{
		if (s[i] != ' ')
			return (1);
	}
	return (0);
}