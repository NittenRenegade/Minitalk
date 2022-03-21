/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_getfmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:16:09 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:03:32 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_getfmax(t_list *lst, long max)
{
	size_t	i;

	if (!lst)
		return (NULL);
	i = 0;
	while (lst)
	{
		if ((long)lst->content > max)
			return (lst);
		lst = lst->next;
		i++;
	}
	return (NULL);
}
