#include<stdio.h>
/*
       1
      12
     123
    1234
   12345
*/
main(){
	int i,j,k;

	for(i=1;i<=5;i++){
	for(k=4;k>=i;k--){
		printf(" ");
	}	
		for(j=1;j<=i;j++){
		printf("%d",j);	

		}
		printf("\n");
	}


	
}
