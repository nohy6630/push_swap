/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yenoh <yenoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:36:27 by yenoh             #+#    #+#             */
/*   Updated: 2023/11/13 12:36:29 by yenoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*to_array(t_stack *stack)
{
	t_node	*tmp;
	int		*arr;
	int		i;

	tmp = stack->head;
	arr = (int *)malloc(sizeof(int) * stack->len);
	i = -1;
	while (++i < stack->len)
	{
		arr[i] = tmp->num;
		tmp = tmp->next;
	}
	return (arr);
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_node	*node;

	tmp = stack->head;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
	free(stack);
}

void	print_stack(t_stack *stack)
{
	t_node	*tmp;

	if (stack->len == 0)
		return ;
	tmp = stack->head;
	ft_printf("head: %d, tail: %d\n", stack->head->num, stack->tail->num);
	ft_printf("stack:        ");
	while (tmp)
	{
		ft_printf(" %d", tmp->num);
		tmp = tmp->next;
	}
	ft_printf("\nreverse stack:");
	tmp = stack->tail;
	while (tmp)
	{
		ft_printf(" %d", tmp->num);
		tmp = tmp->prev;
	}
	ft_printf("\n\n");
}

void	print_arr(int *arr, t_stack *stack)
{
	int	i;

	ft_printf("arr:");
	i = -1;
	while (++i < stack->len)
		ft_printf(" %d", arr[i]);
	ft_printf("\n\n");
}
