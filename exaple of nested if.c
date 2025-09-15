#include<stdio.h>
void main(){
	int ticket,idproof,laggauge;
	
	printf("dow you have a ticket?(yes=1 and no=0)");
	scanf("%d",&ticket);
	
	if(ticket==1){
		printf("Do you have a ID proof?");
		scanf("%d",&idproof);
		if(idproof==1){
			printf("Is your luggauge within 20kg?");
			scanf("%d",&laggauge);
			if(laggauge==1){
				printf("Check in succesfully..");
			}
			else{
				printf("Extra lagguage charges apply..");
			}
		}
		else{
		   printf("Id proof required Or have any other proof that consider you are indian?");

		}
	}
	else{
		printf("NO ticket No entry..");
	}
}
