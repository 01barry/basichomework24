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


	printf("Ū�����e���G\n");

	pFile=fopen("���.txt", "r");

        

    if (pFile==NULL)

    {

        printf("�ɮ׶}�ҥ���!!\n");

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
