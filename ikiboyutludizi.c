#include<stdio.h>
#include<conio.h>
main(){
	int satis[3][2]={{10,20},{4,6},{5,8}};
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++)
		printf("%4d",satis[i][j]);
		printf("\n");
		
		
	}
	getch();
}
