/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getfmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:16:00 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:05:00 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getfmin(t_list *lst, long min)
{
	size_t	i;

	if (!lst)
		return (NULL);
	i = 0;
	while (lst)
	{
		if ((long)lst->content < min)
			return (lst);
		lst = lst->next;
		i++;
	}
	return (NULL);
}
