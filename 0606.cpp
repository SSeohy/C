#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <map>
//SetConsoleOutputCP(CP_UTF8);
//SetConsoleCP(CP_UTF8);

//45번
// void set(int **arr, int* data, int rows, int cols){
//     int i;
//     for(i=0; i<rows*cols; i++){
//         arr[((i+1)/rows) % rows][(i+1) % cols] = data[i];
//     }
// }
// int main(){
//     int rows=3, cols=3, sum=0;
//     int i, **arr;
//     int data[]={5,2,7,4,1,8,3,6,9};
//     arr = (int**)malloc(sizeof(int*)*rows);
//     for(i=0; i<cols; i++)
//         arr[i]=(int*)malloc(sizeof(int)*cols);
//     set(arr, data, rows, cols);
//     for(i=0; i<rows*cols; i++)
//         sum+=arr[i/rows][i%cols]*(i%2==0?1:-1);
//     for(i=0; i<rows; i++)
//         free(arr[i]);
//     free(arr);
//     printf("%d", sum);
//     return 0;
// }


//46번
// typedef struct Data{
//     int value; struct Data* next; 
// } Data;
// Data *insert(Data *head, int value){
//     Data *new_node=(Data *)malloc(sizeof(Data));
//     new_node->value=value;
//     new_node->next=NULL;
//     if(head == NULL)
//         return new_node;
//     new_node->next = head;
//     head = new_node;
//     return head;
// }
// Data *reconnect(Data *head, int disconnect_count){
//     Data *prev = head, *curr = head->next;
//     while(curr && curr->value != disconnect_count){
//         prev=curr;
//         curr=curr->next;
//     }
//     if(curr==NULL) return head;
//     prev->next = curr->next;
//     curr->next = head;
//     return curr;
// }
// int main(){
//     Data *head=NULL, *curr=NULL, *tmp=NULL;
//     int i;
//     for(i=1; i<=5; i++)
//         head = insert(head, i);
//     head = reconnect(head, 3);
//     for(curr = head; curr!=NULL; curr=curr->next)
//         printf("%d", curr->value);
//     while(head){
//         tmp = head;
//         head = head->next;
//         free(tmp);
//     }
//     return 0;
// }


//47번
// typedef struct student{
//     char* name; int score[3];
// }Student;
// int dec(int enc){
//     return enc & 0xA5; //0xA5는 16진수. (A * 16^1 = 160) + (5 * 16^0 = 5) => 165
// }
// int sum(Student *p){
//     return dec(p->score[0])+dec(p->score[1])+dec(p->score[2]);
// }
// int main(){
//     Student s[2] = {"Kim", {0xA0, 0xA5, 0xDB}, "Lee", {0xA0, 0xED, 0x81}};
//     Student *p=s;
//     int res = 0, i;
//     for(i=0; i<2; i++)
//         res += sum(&s[i]); //&는 주소. *는 값.
//     printf("%d", res);
//     return 0;
// }

//48번
// #define SIZE 3
// typedef struct {
//     int data[SIZE]; int front; int rear;
// }Que;
// void enq(Que* q, int val){
//     q->data[q->rear] = val;
//     q->rear = (q->rear+1) % SIZE;
// }
// int deq(Que* q){
//     int val = q->data[q->front];
//     q->front = (q->front+1) % SIZE;
//     return val;
// }
// int main(){
//     Que q = {{0}, 0, 0};
//     int a, b;
//     enq(&q, 1);
//     enq(&q, 2);
//     deq(&q);
//     enq(&q, 3);
//     a = deq(&q);
//     b = deq(&q);
//     printf("%d 그리고 %d", b, a);
//     return 0;
// }


//49번
// struct dat{
//     int x; int y;
// };
// int main(){
//     struct dat a[] = {{1,2}, {3,4}, {5,6}};
//     struct dat* ptr = a;
//     struct dat** pptr = &ptr;
//     (*pptr)[1] = (*pptr)[2];
//     printf("%d 그리고 %d", a[1].x, a[1].y);
//     return 0;
// }


//50번
// struct node {
//     int p; struct node* n;
// };
// int main() {
//     struct node a = {1, NULL};
//     struct node b = {2, NULL};
//     struct node c = {3, NULL};
//     struct node* head = &c;
//     a.n = &b;
//     b.n = &c;
//     c.n = NULL;
//     c.n = &a;
//     a.n = &b;
//     b.n = NULL;
//     printf("%d %d %d", head->p, head->n->p, head->n->n->p);
//     return 0;
// }


//51번
// struct node{
//     char c; struct node* p;
// };
// struct node* func(char* s){
//     struct node* h=NULL, *n;
//     while(*s) {
//         n = (struct node*)malloc(sizeof(struct node));
//         n->c = *s++;
//         n->p = h;
//         h = n;
//     }
//     return h;
// }
// int main(){
//     struct node* n = func("BEST");
//     while(n){
//         struct node* t = n;
//         putchar(n->c);
//         n = n->p;
//         free(t);
//     }
//     return 0;
// }



//52번
// struct S {
//     int x; const char *y; //const 상수
// };
// int main(){
//     struct S t[] = {{1,"AB"}, {2, "DC"}, {3, "EB"}};
//     struct S *p = &t[1];
//     printf("%s", p->y + (p->x-1));
//     return 0;
// }


//53번
// int main(){
//     char str[] = "REPUBLICOFKOREA"; //15개
//     int a = 0;
//     while(str[a] != '\0') ++a;
//     putchar(str[a-2]);
//     return 0;
// }


//54번
// struct Node{
//     struct Node* next; unsigned int x;
// };
// int main(){
//     struct Node t1 = {0, 5u};
//     struct Node t2 = {0, 7u};
//     struct Node t3 = {0, 11u}; //소수네
//     struct Node* curr;
//     int sum = 0;
//     t3.next = &t2;
//     t2.next = &t1;
//     curr = &t3;
//     while(curr){
//         sum = sum*3 + curr->x;
//         curr = curr->next;
//     }
//     sum = (sum^42u) + 100u;
//     printf("%u", sum);
//     return 0;
// }


//천기누설

//1번
// int sjb(int num){
//     int i;
//     for(i=2; i<num; i++){
//         if(num%i==0) return 0;
//     }
//     return 1;
// }
// int main(){
//     int num=10, cnt=0, i;
//     for(i=2; i<num; i++)
//         cnt+=sjb(i);
//     printf("%d\n", cnt);
//     return 0;
// }


//2번
// #include <time.h>
// int main(){
//     int his[6] = {0,};
//     int n, i = 0;
//     srand(time(NULL));
//     do{
//       i++;
//       n = rand()%6 + 1;
//       his[???] += 1;
//     } while (i<10);
//     for(i=0; i<6; i++)
//         printf("[%d] 발생 횟수=%d\n", i+1, ???);
//     return 0;
// }


//3번
// int main(){
//     char ch, str[]="12345000";
//     int i, j;
//     for(i=0; i<8; i++){
//         ch=str[i];
//         if( ???? ) break;
//     }
//     for(j=0; j<i; j++){
//         i--;
//         ch = str[j];
//         str[j] = str[i];
//         str[i] = ch;
//     }
//     printf("%s", str);
//     return 0;
// }


//4번
// int main(){
//     char str1[20] = "KOREA";
//     char str2[20] = "LOVE";
//     char *p1 = NULL;
//     char *p2 = NULL;
//     p1 = str1;
//     p2 = str2;
//     str1[1] = p2[2];
//     str2[3] = p1[4];
//     strcat(str1, str2);
//     printf("%c", *(p1+2));
//     return 0;
// }


//5번
// int main(){
//     int arr[2][3] = {1,2,3,4,5,6};
//     int (*p)[3] = NULL;
//     p=arr;
//     printf("%d", *(p[0]+1)+*(p[1]+2));
//     printf("%d", *(*(p+1)+0) + *(*(p+1)+1));
//     return 0;
// }
//123 = arr[0] = p[0]  / 456 = arr[1] = p[1]


//6번
// int main(){
//     int n1=1, n2=2, n3=3;
//     int r1, r2, r3;
//     r1 = (n2<=2) || (n3>3);
//     r2 = !n3;
//     r3 = (n1>1) && (n2<3);
//     printf("%d", r3-r2+r1);
//     return 0;
// }


//7번
// int fn(char* a){
//     int i=0;
//     for(i=0; a[i] !='\0'; i++);
//     return i;
// }
// int main(){
//     char a[10] = "Hello";
//     printf("%d", fn(a));
//     return 0;
// }



//8번
// struct st{ 
//     int a; int c[10];
// };
// int main(){
//     int i = 0;
//     struct st ob1;
//     struct st ob2;
//     ob1.a = 0;
//     ob2.a = 0;
//     for(i=0; i<10; i++){

//         ob1.c[i] = i;
//         ob2.c[i] = ob1.c[i]+i;
//     }
//     for(i=0; i<10; i=i+2){
//         ob1.a = ob1.a + ob1.c[i];
//         ob2.a = ob2.a + ob2.c[i];
//     }
//     printf("%d", ob1.a + ob2.a);
//     return 0;
// }


//9번
// void Show(int a[][6]){
//     int i, j;
//     for(i=0; i<=4; i++){
//         for(j=5; j>=0; j--){
//             if(i==0 || i==4 || j==0 || j==5)
//                 printf("%3d", a[i][j]);
//             else
//                 printf("   "); //공백3칸
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int a[5][6] = {
//         {24,25,26,27,28,29}, {18,19,20,21,22,23}, {12,13,14,15,16,17},
//         {6,7,8,9,10,11}, {0,1,2,3,4,5}};
//     Show(a);
//     return 0;
// }



//10번(피보나치 수열)
// int fn(int n){
//     if(n==0)
//         return 0;
//     else if(n==1)
//         return ???;
//     else
//         return ????;
// }
// int main(){
//     printf("%d", fn(8));
//     return 0;
// }



//11번
// union Number{
//     int i; float f; };
// struct Data{
//     union Number x;
//     union Number y;
//     char z;
// };
// void func(struct Data* a){
//     if(a->z)
//         a->x.i += a->y.f;
//     else
//         a->x.f += a->y.f;
// }
// int main(){
//     struct Data a = {{.i = 5}, {.f = 3.5}, 1};
//     func(&a);
//     printf("%d\n", a.x.i);
//     return 0;
// }


//12번
int main(){
    int x[4] = {2, 3}, i;
    if(x[2] = x[0]>x[1] ? (x[1]>x[2] ? x[1]:x[2]) : (x[0]>x[2] ? x[0]:x[2]))
        x[0] <<= 2;
    else
        x[1] <<= 2;
    for(i=0; i<4; i++)
        printf("%d", x[i]);
    return 0;
}






