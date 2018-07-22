#include <stdio.h>
#include <string.h>

int main(void) {
  
  char str[100];
    int l;
    scanf("%s",str);
    l = strlen(str);
    int a = 26*(l+1)-l;
    printf("%d\n",a);
  return 0;
}
