//main file



#include "header.h"


int main(){

int size;
int max;
int min;
int test_case;
int found;
		printf("enter array size:");
		scanf("%d",&size);
int n=size;
int usrarr[size];		

		for(int i=0;i<size; i++){
		printf("element 1 %d",i+1);
		scanf("%d",&usrarr[i]);
		}


	findminmax(usrarr,n,&max,&min);
	
	printf("max is %d \n",max);

		printf("select test case to run:(1),(2),(3),(4)\n");
		scanf("%d",&test_case);
	

	switch(test_case){

		case 1:
			for(i=0;i<size;i++){
				if(usrarr[i] == max );
				found ++
			}
		assert(found <=2);
		break;

		case 2:
			if(
	return 0;

}
