#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
void a();
void b();

int M1[4][16]={0};
int M2[16][4]={0};

int M3[4][4]={0};
int i,j,k;

void main(){
	
	int ans;
	
	printf("請輸入你的選擇:\n");
	printf("1>奇數與偶數矩陣相乘\n");
	printf("2>亂數與亂數矩陣相乘\n");
	
	scanf("%d",&ans);
	switch(ans){
		case 1:
		   a();
		   break;
		case 2:
		   b();
		   break;
		default:
		   printf("輸入錯誤\n");
		   break;
	}
	printf("\n\nM3:");
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			for(k=0;k<16;k++){
			M3[i][j]+=M1[i][k]*M2[k][j];
		    }
			printf("%5d  ",M3[i][j]);
		}
	}
	return 0;
}
    void a(){
    	int count1=0,count2=0;
    	
    	printf("M1:");
    	for(i=0;i<4;i++){
    		printf("\n");
    		for(j=0;j<16;j++){
    			    M1[i][j]=2*count1+1;
    			    count1++;
    			    printf("%3d  ",M1[i][j]);
    			    
			}
		}
		printf("\n\nM2:");
		for(i=0;i<16;i++){
			printf("\n");
			for(j=0;j<4;j++){
				M2[i][j]=2*count2+2;
				count2++;
				printf("%3d  ",M2[i][j]);
				}
			}
		}

	void b(){
		srand(time(NULL));
		
		printf("M1:");
		for(i=0;i<4;i++){
			printf("\n");
			for(j=0;j<16;j++){
				M1[i][j]=(rand()%50)+1;
				printf("%2d ",M1[i][j]);
			}
		}
		printf("\n\nM2:");
		for(i=0;i<16;i++){
		    printf("\n");
		    for(j=0;j<4;j++){
					M2[i][j]=(rand()%50)+1;
					printf("%2d",M2[i][j]);
	}
} 
}
