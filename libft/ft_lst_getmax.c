/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:15:59 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:09:05 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getmax(t_list *lst, size_t max_size)
{
	t_list	*max;
	size_t	i;

	if (!lst)
		return (NULL);
	i = 0;
	max = lst;
	while (lst && (max_size == 0 || i < max_size))
	{
		if ((long)max->content < (long)lst->content)
			max = lst;
		lst = lst->next;
		i++;
	}
	return (max);
}
