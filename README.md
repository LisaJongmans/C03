# C03

strstr so far:

#include <stdio.h>
#include <unistd.h>

char        *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    if (to_find[i] == '\0')
      return (*str);
    while (str[i] != '\0')
    {
      while ((to_find[i] != str[j]) && (str[j] != '\0'))
        j++;
      i = 0;
      count = 0;
      while (((str[j] != '\0') && (to_find[i] == str[j])) || (to_find[i] == '\0'))
      {
        if (to_find[i] == '\0')
          return (&str[j - count]);
        i++;
        j++;
        count++;
      }
      return (0);
    }
}

int        main(void)
{
    char str1[] = "helloabctogoabhto";
    char str2[] = "abhto";

    ft_strstr(str1, str2);
    return (0);
}
