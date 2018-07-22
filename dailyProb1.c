#include <stdio.h>

int main(void) {
    int n, sum=0;
    int a=-1;
    int b=1,c=0;
	 scanf("%d",&n);
	 if(n>0 && n<41) {
	     for(int i=1; i<=n+1; i++) {
	         c = a+b;
	         
	         sum = sum+c;
	         a=b;
	         b=c;
	     }}
	 printf("%d",sum);
	     
     
	return 0;
}


