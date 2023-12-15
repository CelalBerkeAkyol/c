// aşağıdaki kod ile boşluklu kelimeleri scanf fonk ile alabilirsin. 
#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
char str[MAX_LIMIT];
  printf("Metni giniriz.");
fgets(str, MAX_LIMIT, stdin);
printf("%s", str);

return 0;
}
