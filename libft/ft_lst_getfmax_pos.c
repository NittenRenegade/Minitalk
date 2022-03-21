/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getfmax_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:36:31 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:04:14 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_lst_getfmax_pos(t_list *lst, long max)
{
	long	i;

	if (!lst)
		return (-1);
	i = 0;
	while (lst)
	{
		if ((long)lst->content > max)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
