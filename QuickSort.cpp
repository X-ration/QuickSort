//快速排序，从小到大 
#include <stdio.h>
void quick_sort(int a[], int start, int end);

int main()
{
	int a[50],n=0;
	int i;
	printf("Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Hello World\n");
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

void quick_sort(int a[], int start, int end)
{
	int ref = a[start];
	int i=start, j=end;
	int t;
	
	if(i==j){
		return;
	}
	
	while(1){
	    while(i!=j && a[j]>ref) j--;
	    while(i!=j && a[i]<=ref) i++;
	    if(i!=j){
		    t=a[i];
		    a[i]=a[j];
		    a[j]=t;
	    } else {
		    a[start]=a[i];
		    a[i]=ref;
		    break;
	    }
	}
	
	printf("This\n");
	for(t=start;t<=end;t++){
		printf("%d ",a[t]);
	}
	printf("\n");
	
	if(i-1>start)
	    quick_sort(a,start,i-1);
	if(j+1<end)
	    quick_sort(a,j+1,end);
}

