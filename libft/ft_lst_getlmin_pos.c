/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getlmin_pos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:34:56 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:13:10 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_lst_getlmin_pos(t_list *lst, long min)
{
	size_t	i;
	size_t	tmp;

	if (!lst)
		return (-1);
	tmp = -1;
	i = 0;
	while (lst)
	{
		if ((long)lst->content < min)
			tmp = i;
		lst = lst->next;
		i++;
	}
	return (tmp);
}
