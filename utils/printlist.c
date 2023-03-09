/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:13:25 by mmendes-          #+#    #+#             */
/*   Updated: 2023/02/23 14:13:25 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void printList(t_list *head)
{
    t_list* temp = head;
    while (temp != NULL) {
        printf("Num = %d Index = %d\n", temp->value, temp->index);
        temp = temp->next;
    }
    printf("\n");
}
