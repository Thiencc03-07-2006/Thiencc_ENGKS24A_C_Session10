#include <stdio.h>

int main(){
	int arr[5]={4,5,3,2,1},i=0,j,safe;
	while(i<5){
		safe=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>safe){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=safe;
		i++;
	}
	i=0;
	while(i<5){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
