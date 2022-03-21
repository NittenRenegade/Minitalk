/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getmin_under.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:04:34 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:11:50 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getmin_under(t_list *lst, size_t max_size, long under)
{
	size_t	i;
	t_list	*min;

	if (!lst)
		return (NULL);
	i = 0;
	min = lst;
	while (lst && (max_size == 0 || i < max_size))
	{
		if ((long)min->content > (long)lst->content
			&& (long)lst->content > under)
			min = lst;
		lst = lst->next;
		i++;
	}
	return (min);
}
