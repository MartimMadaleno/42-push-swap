/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:35:44 by mmendes-          #+#    #+#             */
/*   Updated: 2023/02/14 13:37:22 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_list **stack)
{
	t_list *tmp = *stack;
	printf("AAAA\n");
	while(tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + ((*str) - '0');
		str++;
	}
	return (res * sign);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*strct;

	strct = malloc(sizeof(t_list));
	if (!strct)
		return (NULL);
	strct->content = content;
	strct->next = NULL;
	return (strct);
}

void	fill_list_a(t_list *list_a, char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{	
		ft_lstadd_back(&list_a, ft_lstnew(ft_atoi(argv[i])));
		printf("Numb = %i\n", ft_atoi(argv[i]));
	}
}

int	main(int argc, char **argv)
{
	t_list	**list_a;
	t_list	**list_b;

	if (argc == 1)
		return (printf("Error\n"));
	list_a = NULL;
	list_b = NULL;
	fill_list_a(list_a, argv);
	print_stack(&list_a);
	return (0);
}
