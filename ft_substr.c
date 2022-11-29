/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:02:36 by yuboktae          #+#    #+#             */
/*   Updated: 2022/11/24 11:19:52 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while (s && s[i])
		i++;
	if (start > i)
		len = 0;
	if (len > i - start)
		len = i - start;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*#include <stdio.h>
  int	main()
  {
  char *s = "Lorem ipsum dolor sit amet consectetur adipiscing elit";
  unsigned int start = 6;
  size_t len = 10;

  char *ret = ft_substr(s, start, len);
  printf("%s\n", ret);
  free(ret);
  }
*/
