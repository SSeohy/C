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


//26번
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

//27번
// int main(){
//     int arr[]={64,25,12,22,11};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int i=0, j, tmp;
//     do{
//         j=i+1;
//         do{
//             if(arr[i] > arr[j]){
//                 tmp = arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=tmp;
//             }
//             j++;
//         }while(j<n);
//         i++;
//     }while(i<n-1);
//     for(i=0; i<=4; i++) printf("%d", arr[i]);
//     return 0;
// }


//28번
// int main(){
//     int c=0, i;
//     for(i=1; i<=2023; i++){
//         if(i%4==0) c++;
//     }
//     printf("%d", c);
//     return 0;
// }


//29번
// int per_num(int n){
//     int i, sum=0;
//     for(i=1; i<=(n/2); i++){
//         if(n%i==0) 
//             sum+=i;
//     }
//     if(n==sum) return 1;
//     return 0;
// }
// int main(){
//     int i, sum=0;
//     for(i=2; i<=100; i++)
//         if(per_num(i)) sum+=i;
//     printf("%d", sum);
//     return 0;
// }


//31번
// int sjb(int n){
//     if(n<=1) return n;
//     else return sjb(n-1)+sjb(n-3);
// }
// int main(){
//     printf("%d", sjb(7));
//     return 0;
// }

//test
// void test1(){
//     static int x = 0;   //최초 한번만 초기화, 이후 값 유지
//     x++;
//     printf("%d\n", x);
// }

// void test2(){
//     int x = 0; //호출할 때마다 초기화
//     x++;
//     printf("%d\n", x);
// }

// int main(){
//     test1();
//     test1();
//     test1();
//     test2();
//     test2();
//     test2();
// }

//32번
// int main(){
//     char* p="KOREA";
//     printf("%s\n", p);
//     printf("%s\n", p+1);
//     printf("%c\n", *p);
//     printf("%c\n", *(p+3));
//     printf("%c\n", *p+4);
// }

//33번
// int main(){
//     int v1=0, v2=35, v3=29;
//     if(v1>v2 ? v2:v1)
//         v2=v2 << 2;
//     else v3 = v3 << 2;
//     printf("%d", v2+v3);
//     return 0;
// }

//34번
// void fn(char* str){
//     char t;
//     int len=strlen(str);
//     char* p1 =str;
//     char* p2=str+len-1;
//     while(p1<p2){
//         t=*p1;
//         *p1=*p2;
//         *p2=t;
//         p1++;
//         p2--;
//     }
// }
// int main(int argc, char* argv[]){
//     char str[100]="ABCDEFGH";
//     int len, i;
//     fn(str);
//     len=strlen(str);
//     for(i=1; i<len; i+=2)
//         printf("%c", str[i]);
//     return 0;
// }


//35번
// typedef struct { 
//     int acc; double bal;}Acc;
// double fn(double b, int y){
//     int i;
//     double r=1.0;
//     for(i=0; i<y; i++) 
//         r *= b;
//     return r;
// }
// void init(Acc *a, int x, double y){
//     a->acc=x;
//     a->bal=y;
// }
// void A(Acc *a, double en){
//     if(en>0 && en<a->bal) 
//         a->bal=a->bal-en;
//     else 
//         a->bal=a->bal+en;
// }
// void B(Acc *a){
//     a->bal=a->bal * fn(1+0.1, 3);
// }
// int main(){
//     Acc ba;
//     init(&ba, 9981, 2200.0);
//     A(&ba, 100.0);
//     B(&ba);
//     printf("%d and %.2f", ba.acc, ba.bal);
//     return 0;
// }
//a->bal == (*a).bal


//36번
// #include <ctype.h>
// int main(){
//     char* p="It is 8";
//     char res[100];
//     int i;
//     for(i=0; p[i]!='\0'; i++){
//         if(isupper(p[i]))
//             res[i]=(p[i]-'A'+5) % 26 +'A';
//         else if(islower(p[i]))
//             res[i]=(p[i]-'a'+10) % 26 +'a';
//         else if(isdigit(p[i]))
//             res[i]=(p[i]-'0'+3) % 10 +'0';
//         else if(!((isupper(p[i])) || (islower(p[i])) || (isdigit(p[i]))))
//             res[i]=p[i];
//     }
//     res[i]='\0';
//     printf("%s\n", res);
//     return 0;
// }


//37번
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int* parr[2]={arr[1], arr[2]};
//     printf("%d", parr[1][1] + *(parr[1]+2) + **parr);
//     return 0;
// }

//배열 test
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     int (*p)[3]= NULL;
//     p=arr;
//     printf("p= %d\n, *p= %d\n, *(p[1]+2)= %d\n, *p+2= %d\n", p, *p, *(p[1]+2), *p+2);
//     printf("*(*(p+1)+1)= %d\n, **p= %d\n, p+2= %d\n", *(*(p+1)+1), **p, p+2);
//     printf("*(*p+1))=%d\n, *(*(p+1))=%d\n", *(*p+1), *(*(p+1)));
// }



