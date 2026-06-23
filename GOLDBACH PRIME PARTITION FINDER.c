#include <stdio.h>
#include <stdlib.h>
// Goldbach Prime Partition Finder
int main(){
	int i;
	for (i=0; ; ){
		int i,j,x,a;
		int z=0;
		printf("Enter an even Number - ");
		scanf("%d",&a);
		int b[a];
		int c[a];
		if (a%2==0){
			for (x=1;x<=a;x++){
				int s=0;
				for (i=2;i<=x-1;i++){
					if (x%i!=0){
						s=s+1;
					}
				}
				if (s==x-2){
					z=z+1;
					b[z]=x;
				}
			}
			for (i=0;i<=z;i++){
				c[i]=b[i];
			}
			for (i=0;i<=z;i++){
				if (1+c[i]==a){
					printf("1 + %d\n",c[i]);
				}
				if (2+c[i]==a){
					printf("2 + %d\n",c[i]);
				}
			}
			
		
			
			int q=0;
			for (i=1;i<=z;i++){
				for (j=1+q;j<=z;j++){
					if ((b[i]+c[j])==a){
						printf("%d + %d\n",b[i],c[j]);
					}
				}
				q=q+1;
			}
		}
		else{
			printf("%d ISN'T A EVEN NUMBER");
		}
	}
}