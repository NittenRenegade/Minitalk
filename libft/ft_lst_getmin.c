/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getmin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:15:33 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:10:48 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getmin(t_list *lst, size_t max_size)
{
	size_t	i;
	t_list	*min;

	if (!lst)
		return (NULL);
	i = 0;
	min = lst;
	while (lst && (max_size == 0 || i < max_size))
	{
		if ((long)min->content > (long)lst->content)
			min = lst;
		lst = lst->next;
		i++;
	}
	return (min);
}
