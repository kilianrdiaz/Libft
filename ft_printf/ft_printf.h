/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:18:46 by kroyo-di          #+#    #+#             */
/*   Updated: 2024/08/06 20:09:08 by kroyo-di         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft.h"

int		ft_printf(char const *format, ...);
void	ft_printchar(char c, int *count);
void	ft_printnbr(int n, int *count);
void	ft_printstr(char *s, int *count);
void	ft_printhex(unsigned int num, const char format, int *count);
void	ft_printptr(void *p, int *count);
void	ft_printunsigned(unsigned int n, int *count);
size_t	ft_strlen(const char *str);
#endif
