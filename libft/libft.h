/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:08:06 by coskelet          #+#    #+#             */
/*   Updated: 2022/03/13 12:14:17 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# define BUFFER_SIZE 42

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;
typedef struct s_gnllist {
	int					fd;
	ssize_t				buf_line_size;
	char				*buf_line;
	struct s_gnllist	*next;
}	t_gnllist;

char	*get_next_line(int fd);
void	get_list_elem(const int fd, t_gnllist **lst, t_gnllist **l_elem);
void	free_list(t_gnllist **lst, int fd);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isnum(char *str);
int		ft_isint(char *str);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsze);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsze);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *litte, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t nelem, size_t elsize);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_str(void *s);
void	ft_print_nbr(void *n);
void	ft_print_intarr(int ar[], size_t size);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstsublast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lst_shortclear(t_list **lst);
int		ft_lst_issort(t_list *lst, short asc);
int		ft_lst_isdup(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstiter_reverse(t_list *lst, void (*f)(void *));
long	ft_lst_getfpos(t_list *lst, void *value);
t_list	*ft_lst_getmin(t_list *lst, size_t max_size);
t_list	*ft_lst_getfmin(t_list *lst, long min);
long	ft_lst_getfmin_pos(t_list *lst, long min);
t_list	*ft_lst_getlmin(t_list *lst, long min);
long	ft_lst_getlmin_pos(t_list *lst, long min);
t_list	*ft_lst_getmin_under(t_list *lst, size_t max_size, long under);
t_list	*ft_lst_getmax(t_list *lst, size_t max_size);
t_list	*ft_lst_getfmax(t_list *lst, long max);
long	ft_lst_getfmax_pos(t_list *lst, long max);
t_list	*ft_lst_getlmax(t_list *lst, long max);
long	ft_lst_getlmax_pos(t_list *lst, long max);
t_list	*ft_lst_getmax_below(t_list *lst, size_t max_size, long below);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_sort_quick(long ar[], long low, long high);

#endif
