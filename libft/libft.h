/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:37:23 by elcarrei          #+#    #+#             */
/*   Updated: 2016/11/09 20:29:00 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
# define	LIBFT_H

int		ft_atoi(char *str);
int		ft_isalnum(char *str);
int		ft_isalpha(char *str);
int		ft_isdigit(char *str);
int		ft_isprint(char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(char *s1, char *s2);
int		ft_strequ(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2, size_t size);
int		ft_strnequ(const char *s1, const char *s2, int n);
char	ft_tolower(int c);
char	ft_toupper(int c);
char	*ft_itoa(int n);
char	*ft_strcat(char *dst, char *src);
char	*ft_strchr(char *str, int c);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strdup(char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strmap(char *str, char (*f) (char));
char	*ft_strmapi(const char *str, char (*f) (unsigned int, char));
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, int n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t size);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strtrim(char const *str);
char	**ft_strsplit(char const *str, char c);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *str);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *str, int fd);
void	ft_strclr(char *str);
void	ft_strdel(char **as);
void	ft_striter(char *str, void (*f) (char *));
void	ft_striteri(char *str, void (*f) (unsigned int, char *));


#endif


















