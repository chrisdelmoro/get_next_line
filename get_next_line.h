/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:51:16 by ccamargo          #+#    #+#             */
/*   Updated: 2022/05/21 18:33:31 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

/* REMOVER! */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

/**
 * @brief The get_next_line() function allocates (with malloc(3)) and returns a
 * new string, which is the current found line of the opened file.
 *
 * @param fd The file descriptor of the opened file.
 * 
 * @return (char *) Returns found line or NULL file ended or error occured.
 */
char	*get_next_line(int fd);

/**
 * @brief The ft_strjoin() function allocates (with malloc(3)) and returns a
 * newstring, which is the result of the concatenation of ’s1’ and ’s2’.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * 
 * @return (char *) Returns the new string or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief The ft_strchr() functions returns a pointer to the first occurrence
 * of the character c in the string s.
 *
 * @param s Pointer to the string memory area.
 * @param c Character to be searched inside the string s.
 * 
 * @return (char *) Return a pointer to the matched character or NULL if the
 * character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief The ft_strlen() function calculates the length of the string pointed
 * to by s, excluding the terminating null byte ('\0').
 *
 * @param s Pointer to the initial area of the string.
 * 
 * @return (size_t) Returns the number of bytes in the string pointed to by s.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief The ft_strdup() function returns a pointer to a new string which is a
 * duplicate of the string s.
 *
 * @param s1 Pointer to the start of the string do be copied.
 * 
 * @return (char *) On success, returns a pointer to the duplicated string. It
 * returns NULL if insufficient memory was available, with errno set to
 * indicate the cause of the error.
 */
char	*ft_strdup(const char *s);

/**
 * @brief The ft_substr() function allocates (with malloc(3)) and returns a
 * substringfrom the string ’s’. The substring begins at index ’start’ and is
 * of maximum size ’len’.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * 
 * @return (char *) Returns the substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
