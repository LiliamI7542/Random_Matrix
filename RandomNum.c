#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool emptyq(void);
bool addq(int);
void  printq(void) ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct LinkList
{
	int value;
	struct LinkList *nextPtr;
};

typedef struct LinkList LinkList_Data;
typedef LinkList_Data *LinkList_Point;
LinkList_Point Front_Point=NULL;
LinkList_Point Back_Point=NULL;


int main(int argc, char *argv[]) 
{	
	srand(time(NULL));
	test12();
	return 0;
}


bool emptyq(void)
{
	return Front_Point==NULL ? true : false;
}
bool addq(int InPutData)
{	
	LinkList_Point new_node;
	new_node=(LinkList_Point)malloc(sizeof(LinkList_Data));
    new_node->value=InPutData;    
    new_node->nextPtr=NULL;   
    if (Back_Point==NULL)Front_Point=new_node;     
    else Back_Point->nextPtr=new_node;
    Back_Point= new_node;         
}

void printq(void) {
   LinkList_Point current = Front_Point;  
   while (current!= NULL) 
   { 
      printf("[%d]",current->value);
      current = current->nextPtr;  
   }
   if(Front_Point==NULL)printf("佇列為空");
   printf("\n");
}

int deleteq(int *OutData)
{
   LinkList_Point ptr;
   if (!emptyq()) 
   {   
	if(Front_Point==Back_Point)Back_Point=NULL;         
    ptr=Front_Point;
    Front_Point=Front_Point->nextPtr;   
    *OutData = ptr->value;      
    free(ptr);              
    return true;          
   }
   else return false;         
}

void test1(void)
{
	int count,m;
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	for(count=0;count<3;count++)deleteq(&m);
	printf("m值為%d\n",m);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test2(void)
{
	int count,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	for(count=0;count<30;count++)deleteq(m+count);
	printf("m值為%d\n",m[2]);
	for(count=0;count<30;count++)addq(m[count]);
	printf("執行題目後佇列內容-------------\n");
	printq();
}
void test3(void)
{
	int count,m;
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	for(count=0;count<12;count++)deleteq(&m);
	printf("m值為%d\n",m);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test4(void)
{
	int count,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	for(count=0;count<30;count++)deleteq(m+count);
	printf("m值為%d\n",m[11]);
	for(count=0;count<30;count++)addq(m[count]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test5(void)
{
	int count,m;
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())deleteq(&m);
	printf("m值為%d\n",m);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test6(void)
{
	int count,count2,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count]);
	for(count2=0;count2<=count;count2++)addq(m[count2]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test7(void)
{
	int count,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-1]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test8(void)
{
	int count,count2,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-1]);
	for(count2=0;count2<=count;count2++)addq(m[count2]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test9(void)
{
	int count,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-2]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test10(void)
{
	int count,count2,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-2]);
	for(count2=0;count2<=count;count2++)addq(m[count2]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test11(void)
{
	int count,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-3]);
	printf("執行題目後佇列內容-------------\n");
	printq();
} 
void test12(void)
{
	int count,count2,m[30];
	for(count=0;count<30;count++)
	{
		int x =rand()%100+1;
		printf("第%d亂數生成為=%d\n",count+1,x);
		addq(x);
	}
	count=0;
	printf("目前佇列內容-------------------\n");
	printq();
	printf("執行題目-----------------------\n");
	while(!emptyq())
	{
		deleteq(m+count++);
	}
	printf("m值為%d\n",m[--count-3]);
	for(count2=0;count2<=count;count2++)addq(m[count2]);
	printf("執行題目後佇列內容-------------\n");
	printq();
}  
