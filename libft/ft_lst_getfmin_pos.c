/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getfmin_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:34:43 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:05:40 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_lst_getfmin_pos(t_list *lst, long min)
{
	size_t	i;

	if (!lst)
		return (-1);
	i = 0;
	while (lst)
	{
		if ((long)lst->content < min)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
