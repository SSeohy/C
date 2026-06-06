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








