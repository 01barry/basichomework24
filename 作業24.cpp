#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int calculus;

	int computer;

	int programming;

} p;



int main(void)

{
	int y;
    FILE *pFile;


	printf("讀取內容為：\n");

	pFile=fopen("資料.txt", "r");

        

    if (pFile==NULL)

    {

        printf("檔案開啟失敗!!\n");

        exit(1);

	}   

    else

    {

	
		for(y=0;y<7;y++){
			fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming);
			printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
		}    

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
