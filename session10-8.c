#include <stdio.h>

int main(){
	int arr[100][100],i,j,t,n,m,save;
	printf("vui long nhap vao so hang: ");
	scanf("%d",&n);
	printf("vui long nhap vao so cot: ");
	scanf("%d",&m);
	i=0;
	while(i<n){
		j=0;
		while(j<m){
			printf("vui long nhap vi tri [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			j++;
		}
		i++;
	}
	j=0;
	while(j<m){
		t=0;
		while(t<n-1){
			i=0;
			while(i<n-t-1){
				if(arr[i][j]>arr[i+1][j]){
					save=arr[i][j];
					arr[i][j]=arr[i+1][j];
					arr[i+1][j]=save;
				}
				i++;
			}
			t++;
		}
		j++;
	}
	i=0;
	printf("Ma tran\n");
	while(i<n){
		j=0;
		while(j<m){
			printf("%d ",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
