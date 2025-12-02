#include <stdio.h>

int main() {
	// input
	int mid,final,q1,q2,lab,sit;
	scanf("%d %d %d %d %d %d",&mid,&final,&q1,&q2,&lab,&sit);
	
	// scoring
	float mid_f,final_f,q1_f,q2_f,lab_f,sit_f,total;
	mid_f = mid*30/100;
	final_f = final*35/120;
	q1_f = q1*12/60;
	q2_f = q2*13/60;
	lab_f = lab*5/16;
	sit_f = sit*5/16;
	total = mid_f+final_f+q1_f+q2_f+lab_f+sit_f;
	
	printf("%10s%8d => %.2f\n","Mid=",mid,mid_f);
	printf("%10s%8d => %.2f\n","Final=",final,final_f);
	printf("%10s%8d => %.2f\n","Q1=",q1,q1_f);
	printf("%10s%8d => %.2f\n","Q2=",q2,q2_f);
	printf("%10s%8d => %.2f\n","lab=",lab,lab_f);
	printf("%10s%8d => %.2f\n","sit=",sit,sit_f);
	printf("*****%.2f****",total);
}
