#include <stdio.h>
int main() {
    int s,grade;
    scanf("%d", &s) ;
    if (s<0||s>100){
    	grade = 6;
	}
	else {
    if (s>= 68){
    if (s >= 85)
    grade = 1;
    else if (s >= 75)
    grade = 2;
    else if (s >= 68)
    grade = 3;
	}
	else {
    if (s >= 55)
    grade = 4;
    else if (s < 55)
    grade = 5;
}
	}
	switch (grade){
	case 6: printf("error score\n"); break;
    case 1: printf("A\n"); break;
    case 2: printf("B\n"); break;
    case 3: printf("C %d\n",75-s); break;
    case 4: printf("D\n"); break;
    case 5: printf("F\n"); break;
    
}
}
	
   
	

    





