#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,pf=0,j,k,m[20],rs[20],min,next=0,flag[20],count[20],n,f;
	printf("Enter length of reference string:");
	scanf("%d",&n);
	printf("Enter the reference string:\n");
	for(i=0;i<n;i++){
		scanf("%d",&rs[i]);
		flag[i]=0;
	}

	printf("Enter the n.o of frames:");
	scanf("%d",&f);
	for(k=0;k<f;k++){
		m[k]=-1;
		count[k]=0;
	}

	printf("page replacement process is:\n");
	for(i=0;i<n;i++){
		for(k=0;k<f;k++){
			if(m[k]==rs[i]){
				flag[i]=1;
				count[k]=next;
				next++;
				
			}
		}
		if(flag[i]==0){
			if(i<f){
				m[i]=rs[i];
				count[i]=next;
				next++;
			}
			else{
				min=0;
				for(j=0;j<f;j++){
					if(count[min]>count[j]){
						min=j;
					}
				}
				m[min]=rs[i];
				count[min]=next;
				next++;
			}
			pf++;
		}
		for(j=0;j<f;j++){
			printf("\t%d",m[j]);
		}
		if(flag[i]==0){
			printf("\tPF N.O:%d",pf);
		}
		printf("\n");
	}
	printf("N.o of page faults is:%d\n",pf);
}
