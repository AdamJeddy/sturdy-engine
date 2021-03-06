/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:36:47 by aahsan            #+#    #+#             */
/*   Updated: 2022/07/19 15:47:59 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

//# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int alpha);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);

int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_toascii(int ch);

int		ft_strlen(char *str);
char	*ft_strchr(char *str, int num);
char	*ft_strrchr(char *str, int num);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	*ft_memset(void *str, int ch, size_t n);
void	*ft_memchr(const void *str, int ch, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
