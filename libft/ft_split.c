/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martrodr-99 <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:43:39 by martrodr-99       #+#    #+#             */
/*   Updated: 2022/11/25 22:49:40 by martrodr-99      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
----------------------------------------------------------------------
SPLIT
- split allocates memory and returns a 'fresh' table of strings
(all terminated by a '\0', the table as well) obtained by splitting
’s’ using the character ’c’ as a delimiter  

- the array must end with a NULL pointer

- return the array of new strings resulting from the split
or NULL if the allocation fails

s:  string to be split
c:  delimiter character

- example of this function: ft_strsplit("*hello*fellow***students*", '*')
	This should return a table that splits the string in 
	["hello", "fellow", "students"]

- static variable: remains in memory while the program is running
(normal or auto variable is destroyed when a function call where the
variable was declared is over)

----------------------------------------------------------------------
COUNTWORD
- countword is a word counting function: count all of the words that
exists in our string and return that value

- we use this function to figure out how much space we need to allocate
for our table in ft_split

- here the c character is the same c character that the ft_strsplit
function will be splitting the string by. So we want to skip over that
character until we find our first real word

----------------------------------------------------------------------
 */

static int	ft_countword(char const *s, char c)
{
	size_t	count;
	int		flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag == 1)
		{	
			flag = 0;
			count++;
		}
		else if (*s == c)
			flag = 1;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	start;
	size_t	i;
	char	**matrix;

	if (!s)
		return (NULL);
	count = 0;
	start = 0;
	i = 0;
	matrix = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
	if (!matrix)
		return (NULL);
	while (*(s + count))
	{
		while (*(s + count) == c && *(s + count))
			count++;
		start = count;
		while (*(s + count) != c && *(s + count))
			count++;
		if (count > start)
			matrix[i++] = ft_substr(s, start, (count - start));
	}
	matrix[i] = NULL;
	return (matrix);
}

/* int		main()
{
	char	arr[] = "  m   marta   12";
	char	**splitted;
	splitted = ft_split(arr, ' ');
	printf("SPLITTED[0] = %s\n", splitted[0]);
	printf("SPLITTED[1] = %s\n", splitted[1]);
	printf("SPLITTED[2] = %s\n", splitted[2]);
	return (0);
} */