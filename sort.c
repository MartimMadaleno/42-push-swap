/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:59:34 by mmendes-          #+#    #+#             */
/*   Updated: 2023/02/24 16:59:34 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_stack_bottom(t_list *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_list	*get_stack_before_bottom(t_list *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

static void sort_3(t_list **list_a)
{
	if((*list_a)->index == 1)
	{
		if((*list_a)->next->index == 0)
			do_sa(list_a);
		else if((*list_a)->next->index == 2)
			do_rra(list_a);
	} 
	else if((*list_a)->index == 2)
	{
		if((*list_a)->next->index == 1)
		{
			do_sa(list_a);
			do_rra(list_a);
		}
		else if((*list_a)->next->index == 0)
			do_ra(list_a);
	} 
	else if((*list_a)->index == 0)
	{
		if((*list_a)->next->index == 2)
		{
			do_sa(list_a);
			do_ra(list_a);
		}
	}
}

static void sort_4(t_list **list_a, t_list **list_b)
{
	do_pb(list_a, list_b);
	sort_3(list_a);
	while((*list_b)->index + 1 != (*list_a)->index)
	{
		do_ra(list_a);
	}
	do_pa(list_a, list_b);
	while((*list_a)->index != 0)
	{
		do_ra(list_a);
	}
}

static void sort_5(t_list **list_a, t_list **list_b)
{
	do_pb(list_a, list_b);
	do_pb(list_a, list_b);
	sort_3(list_a);
	while((*list_b)->index + 1 != (*list_a)->index)
	{
		do_ra(list_a);
	}
	do_pa(list_a, list_b);
	while((*list_b)->index + 1 != (*list_a)->index)
	{
		do_ra(list_a);
	}
	do_pa(list_a, list_b);
	while((*list_a)->index != 0)
	{
		do_ra(list_a);
	}
}

static void sort_max(t_list **list_a, t_list **list_b, int argc) // >= 6  25%
{
	int chunks;

	chunks = 3;
	while (1)
	{

		//find numb of chunks
		//find numbe ez numb in stack a
		//put in the right spot of b | know if it is ez to do the same moves to stack a or not
		//do that to all chunks
		//pass all to a
		//:)
	}
}

void sort(int argc, t_list **list_a, t_list **list_b)
{
	if(argc < 5)
		sort_3(list_a);
	else if(argc == 5)
		sort_4(list_a, list_b);
	else if(argc == 6)
		sort_5(list_a, list_b);
	else
		sort_max(list_a, list_b, argc);
}