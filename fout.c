//out file


void findminmax(int arr[], int n ,int *max , int *min){
	
 *max = arr[0];
 *min = arr[0];

	for(int i=0;i<n;i++){
		
		if(arr[i] > *max)
			*max = arr[i];
		if(arr[i] < *min)
			*min = arr[0];
			}

		}






