#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	int yas[10]={1,2,3,4,5,6,7,8,9,10};
	int eb,k;
	eb=yas[0];
	for(k=0;k<10;k++){
		
		if(yas[k]>eb)  
		 eb=yas[k];
	}
	printf("\n en buyuk yas=%d",eb);
	getch();
}
