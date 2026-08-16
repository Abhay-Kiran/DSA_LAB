//main file
// name: ABHAY KIRAN 
// regno: 261100620002


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
		printf("element  %d",i+1);
		scanf("%d",&usrarr[i]);
		}
findminmax(usrarr,n,&max,&min);
	printf("max is %d \n",max);
for(int j=0;j<5;j++){
  printf("select test case to run:(1),(2),(3),(4)\n");
		scanf("%d",&test_case);
	

	switch(test_case){

		case 1:
			for(int i=0;i<size;i++){
				if(usrarr[i] == max );
				found ++;
			}
		assert(found>=2);
    printf("passed\n");
		break;

		case 2:
      int i;

		  assert(usrarr[0]==max);
      assert(usrarr[0]==min);
      assert(usrarr[1]==max);
      printf("Uni array\n");
      break;

    case 3:
    for(int i=0;i<size;i++){
      assert(usrarr[i]==max);
      assert(usrarr[i]==min);
    }
    printf("identical element array\n");
    break;

    case 4:
    assert(usrarr!=NULL);
    printf("not null array\n");
    break;

  }
 
}

	return 0;

}
