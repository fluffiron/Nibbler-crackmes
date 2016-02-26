#include<stdio.h>
#include<stdlib.h>

int main(){
	int index = 0;
	char obj0[256] = {0};
	char arrayTypeBy03E[4] = {0};
	char arrayTypeBy07E[8] = {0};
	char nm[256] = {0};						//input name
	char answer[17] = {0};
	int arrayTypeBy03K[4] = {0}; //probably, 1+12/4 = 4 || 12
	printf("Enter name please!\n");
	scanf("%s",nm);

	for(index = 0; index < 4; ++index){
		//obj0[56+index] = nm[index];
		arrayTypeBy03E[index] = nm[index];
	}
	arrayTypeBy03K[0] = (((int)arrayTypeBy03E[0]) * 2) + (((int)arrayTypeBy03E[1]) * 4);
	arrayTypeBy03K[1] = (int)arrayTypeBy03E[3] * 6/* + (int)arrayTypeBy03E[4] * 8*/;

	for(index = 4 ; (int)nm[index] != 0; ++index){
		arrayTypeBy03K[2] = arrayTypeBy03K[2] + nm[index];
	}
	arrayTypeBy03K[2] = arrayTypeBy03K[2] * 10;
	arrayTypeBy03K[2] = arrayTypeBy03K[2] * 12;
	arrayTypeBy03K[2] = arrayTypeBy03K[2] * 14;
	arrayTypeBy03K[2] = arrayTypeBy03K[2] * 16;

	arrayTypeBy03K[3] = (arrayTypeBy03K[0] + arrayTypeBy03K[1]) * arrayTypeBy03K[2];
	arrayTypeBy03K[3] ^= -1737075662;

	arrayTypeBy07E[0] = (char)((arrayTypeBy03K[2] >> 16) & 255);
	arrayTypeBy07E[1] = (char)((int)(arrayTypeBy03K[3] >> 8) & 255); //
	arrayTypeBy07E[2] = (char)(arrayTypeBy03K[0] & 255);
	arrayTypeBy07E[3] = (char)((int)((arrayTypeBy03K[3]) >> 16) & 255);
	arrayTypeBy07E[4] = (char)(((arrayTypeBy03K[0] & 15) << 4) | (arrayTypeBy03K[1] & 15));
	arrayTypeBy07E[5] = (char)(arrayTypeBy03K[3] & 255);
	arrayTypeBy07E[6] = (char)(arrayTypeBy03K[1] & 255);
	arrayTypeBy07E[7] = (char)((int)(arrayTypeBy03K[3] >> 24) & 255);
	for(index = 0; index < 8; ++index){
		answer[2*index] = (arrayTypeBy07E[index] & 0xf0) >> 4;
		answer[2*index+1] = arrayTypeBy07E[index] & 0x0f;
	}
	for(index = 0; index <17; ++index){
		printf("%X",answer[index]);
	}
	printf("\n");
	system("pause");
	return 0;
}