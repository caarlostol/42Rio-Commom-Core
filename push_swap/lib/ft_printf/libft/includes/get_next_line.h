/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chayashi <caarlostol@student.42.rio>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:31:54 by chayashi          #+#    #+#             */
/*   Updated: 2024/05/31 10:31:55 by chayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t				gnl_strlen(const char *str);
char				*gnl_substr(char *s, unsigned int start, size_t len);
size_t				gnl_strlcpy(char *dest, const char *src, size_t size);
int					gnl_strchr(char *s, char c);
char				*get_next_line(int fd);
char				*gnl_strjoin(char *s1, char *s2);

#endif
