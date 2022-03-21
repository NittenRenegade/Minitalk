/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getlmax_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:36:40 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:07:23 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_lst_getlmax_pos(t_list *lst, long max)
{
	long	i;
	long	tmp;

	if (!lst)
		return (-1);
	tmp = -1;
	i = 0;
	while (lst)
	{
		if ((long)lst->content > max)
			tmp = i;
		lst = lst->next;
		i++;
	}
	return (tmp);
}
