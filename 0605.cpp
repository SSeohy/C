#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <map>


//23번
// int main(){
//     int n[3]={73, 95, 82};
//     int i, sum=0;
//     for(i=0; i<3; i++)
//         sum+=n[i];
//     switch (sum/30)
//     {
//     case 10:
//     case 9: printf("A");
//     case 8: printf("B");
//     case 7:
//     case 6: printf("C");
//     default: printf("D");
//     }
// }

//24번
// #define MAX_SIZE 10

// int isWhat[MAX_SIZE];
// int point=-1;
// int isEmpty(){
//     if(point==-1) return 1;
//     return 0;
// }
// int isFull(){
//     if(point==10) return 1;
//     return 0;
// }
// void into(int num){
//     if(point>=10) printf("Full");
//     isWhat[++point]=num;
// }
// int take(){
//     if(isEmpty()==1) printf("Empty");
//     return isWhat[point--];
// }
// int main(){
//     into(5);
//     into(2);
//     while(!isEmpty()){
//         printf("%d", take());
//         into(4);
//         into(1);
//         printf("%d", take());
//         into(3);
//         printf("%d", take());
//         printf("%d", take());
//         into(6);
//         printf("%d", take());
//         printf("%d", take());
//     }
//     return 0;
// }


//25번
// char n[30];
// char *sjb(){
//     gets(n);
//     return n;
// }
// int main(){
//     char *p1=sjb();
//     char *p2=sjb();
//     char *p3=sjb();
//     printf("%s\n", p1);
//     printf("%s\n", p2);
//     printf("%s\n", p3);
//     return 0;
// }

// int main(){
//     int m=4620;
//     int a, b, c, d;
//     a= ??;
//     b= ??;
//     c= ??;
//     d= ??;
//     printf("1000원:%d개\n", a);
//     printf("500원:%d개\n", b);
//     printf("100원:%d개\n", c);
//     printf("10원:%d개\n", d);
//     return 0;
// }
// a= m/1000;
// b= (m%1000)/500;
// c= (m%500)/100;
// d= (m%100)/10;







