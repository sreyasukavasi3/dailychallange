#include <stdio.h>
#include <string.h>
int main()
{
   char S[1000000];
   int n, cnt=0;
   scanf("%d",&n);
   scanf("%s",S);
   int l = strlen(S);

   if(n < 27) {
       for(int i = 0; i < l+1; i++) {
        for(int j = i+1; j < l+1; j++) {
           if(S[i]==S[j]) {
                cnt++;
                break;
                
           }
        }
      }

   } else {
        cnt = -1;
   }
    
    printf("%d",cnt);
    
    return 0;
}
