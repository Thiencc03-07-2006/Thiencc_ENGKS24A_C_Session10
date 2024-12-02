#include <stdio.h>

int main(){
	int arr[5]={4,5,3,2,1},i=0,j,min,save;
	while(i<5){
		min=i;
		j=i+1;
		while(j<5){
			if(arr[j]<arr[min]){
				min=j;
			}
			j++;
		}
		if(min!=i){
			int save;
			save =arr[min];
			arr[min]=arr[i];
			arr[i]=save;
		}
		i++;
	}
	i=0;
	while(i<5){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
