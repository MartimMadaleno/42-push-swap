/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:27:59 by mmendes-          #+#    #+#             */
/*   Updated: 2023/02/14 13:29:35 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;


void sort(int argc, t_list **list_a, t_list **list_b);
t_list	*fill_list_a(t_list *list_a, char **argv);
int is_correct_input(char **argv);
t_list	*ft_lstnew(int value, int index);
void	ft_lstadd_back(t_list *lst, t_list *new);
int	ft_isdigit( int arg);
void	*ft_calloc(size_t nitems, size_t size);
void	ft_bzero(void *s, size_t n);
int	ft_atoi(const char *str);
void printList(t_list *head);
t_list	*get_stack_bottom(t_list *stack);
t_list	*get_stack_before_bottom(t_list *stack);


void	do_pa(t_list **stack_a, t_list **stack_b);
void	do_pb(t_list **stack_a, t_list **stack_b);
void	do_sa(t_list **stack_a);
void	do_sb(t_list **stack_b);
void	do_ss(t_list **stack_a, t_list **stack_b);
void	do_ra(t_list **stack_a);
void	do_rb(t_list **stack_b);
void	do_rr(t_list **stack_a, t_list **stack_b);
void	do_rra(t_list **stack_a);
void	do_rrb(t_list **stack_b);
void	do_rrr(t_list **stack_a, t_list **stack_b);

#endif