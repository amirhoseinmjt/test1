#include <stdio.h>

int main()
{	int n , max ;
	
	scanf("%d",&n);
	if(n!=-1)
	max=n ;
	
	while (n!=-1){
		scanf("%d",&n) ;
		if(n>max&n!=-1 )
		{
			max = n ;
		}

	} 
	
printf("%d", max);
	return (0);
}