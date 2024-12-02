#include <stdio.h>

int main(){
	int arr[5]={4,5,3,2,1},i=0,j,save;
	while(i<4){
		j=0;
		while(j<4-i){
			if(arr[j]>arr[j+1]){
				save=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=save;
			}
			j++;
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
