#include "minishell.h"

s_command *check_pipe(char *s, s_command *command)
{
  char *tmp;
  int i;
  int j;
  int k;

  i = 0;
  j = 0;
  k = 0;
  tmp = malloc(ft_strlen(s) * sizeof(char));
  while (s[i])
  {
    if (s[i] == '|' || s[i] == ';')
    {
      tmp[k] = '\0';
      command[j].command = ft_split(tmp, ' ');
      printf("tmp = %s %s %s\n", command[j].command[0], command[j].command[1], command[j].command[2]);
      k = 0;
      j++;
      i++;
    }
    tmp[k] = s[i];
    k++;
    i++;
  }
  if (j == 0)
    command[j].command = ft_split(s, ' ');
  else
  {
    tmp[k] = '\0';
    command[j].command = ft_split(tmp, ' ');
  }
  printf("tmp = %s %s\n", command[j].command[0], command[j].command[1]);
  return (command);
}
