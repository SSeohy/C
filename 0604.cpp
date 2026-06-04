#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <map>


//1번
// int main(){
//     int i, j;
//     int temp;
//     int a[5]={75,95,85,100,50};
//     for(i=0; i<4; i++){
//         for(j=0; j<4; j++){
//             if(a[j] > a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(i=0; i<5; i++){
//         printf("%d", a[i]);
//     }
//     return 0;
// }


//2번
// int main(){
//     int i=0, c=0;
//     while(i<10){
//         i++;
//         c *=i;
//     }
//     printf("%d", c);
//     return 0;
// }


// 3번
// int r1(){
//     return 4;
// }

// int r10(){
//     return (30+r1());
// }

// int r100(){
//     return (200+r10());
// }

// int main(){
//     printf("%d\n", r100());
//     return 0;
// }
//예상결과: 234


//5번
// int main(){
//     char *p = "KOREA";
//     printf("%s\n", p);
//     printf("%s\n", p+3);
//     printf("%c\n", *p);
//     printf("%c\n", *(p+3));
//     printf("%c\n", *p+2);
//     return 0;
// }
//예상결과: KOREA/E/KOREA/E/R


//6번
// struct Sjb {
//     char name[10];
//     int age;
// };
// int main(){
//     struct Sjb s[] ={"Kim", 28, "Lee", 38, "Seo", 50, "Park", 35};
//     struct Sjb *p;
//     p = s;
//     p++;
//     printf("%s\n", p->name);
//     printf("%d\n", p->age);
//     return 0;
// }


//7번
// int main(){
//     int ary[3]={1};
//     int s=0;
//     int i=0;
//     ary[1]=*(ary+0)+2; //ary[1]=3
//     ary[2]=*ary+3; //ary[2]=4
//     for(i=0; i<3; i++){
//         s= s+ary[i];
//     }
//     printf("%d", s);
//     return 0;
// }


//8번
// int Sjb(int base, int exp){
//     int i, r=1;
//     for(i=0; i<exp; i++)
//         r *= base;
//     return r;
// }
// int main(){
//     printf("%d", Sjb(2, 10));
//     return 0;
// }


//9번
// int main(){
//     int *arr[3];
//     int a=12, b=24, c=36;
//     arr[0]=&a;
//     arr[1]=&b;
//     arr[2]=&c;
//     printf("%d\n", *arr[1]+**arr+1);
//     return 0;
// }


//10번
// struct Sjb{
//     char name[20];
//     int os, db, h1, h2;
// };
// int main(){
//     struct Sjb s[3]={{"데이터1", 95, 88},
//         {"데이터2", 84, 91}, {"데이터3", 86, 75}};
//     struct Sjb *p;
//     p=&s[0];
//     (p+1)->h1=(p+1)->os+(p+2)->db;
//     (p+1)->h2=(p+1)->h1+p->os+p->db;
//     printf("%d\n", (p+1)->h1+(p+1)->h2);
//     return 0;
// }


//11번
// int fn(int a){
//     if(a<=1) return 1;
//     return a * fn(a-1);
// }
// int main(){
//     int a;
//     scanf("%d", &a); //입력값 5
//     printf("%d", fn(a));
//     return 0;
// }

//12번
// int main(){
//     int num = 1234;
//     int div = 10;
//     int res = 0;
//     while(num ?? 0){
//         res = res*div;
//         res = res+num ?? div;
//         num = num ??? div;
//     }
//     printf("%d", res);
//     return 0;
// }


//13번
// int isP(int num){
//     int i;
//     for(int i=2; i<num; i++){
//         if(num % i==0) return 0;
//     }
//     return 1;
// }
// int main(){
//     int num = 13195, max=0, i;
//     for(i=2; i<num; i++)
//         if(isP(i)==1 && num%i==0)
//             max=i;
//     printf("%d", max);
//     return 0;
// }


//14번
// struct Student {
//     int n, g;
// };
// int main(){
//     struct Student st[2];
//     int i=0;
//     for(i; i<2; i++){
//         st[i].n=i;
//         st[i].g=i+1;
//     }
//     printf("%d", st[0].n+st[1].g);
//     return 0;
// }


//15번
// int len(char* p);
// int main(){
//     char *p1="2022";
//     char *p2="202207";
//     printf("%d",len(p1)+len(p2));
//     return 0;
// }
// int len(char* p){
//     int r=0;
//     while(*p != '\0'){
//         p++;
//         r++;
//     }
//     return r;
// }


//16번
// int main(){
//     int a[4]={0,2,4,8};
//     int b[3];
//     int* pl;
//     int i, j;
//     int sum=0;
//     for(i=1; i<4; i++){
//         pl=a+i;
//         b[i-1]=*pl-a[i-1];
//         sum+=a[i]+b[i-1];
//     }
//     printf("%d", sum);
//     return 0;
// }


//17번
// int calc(int w, int h, int j, int i){
//     if(i>=0 && i<h && j>=0 && j<w)
//         return 1;
//     return 0;
// }
// int main(){
//     int field[4][4]={{0,1,0,1}, {0,0,0,1}, {1,1,1,0}, {0,1,1,1}};
//     int mines[4][4]={{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
//     int w=4, h=4;
//     int i, j, k, l;
//     for(l=0; l<h; l++){
//         for(k=0; k<w; k++){
//             if(field[l][k]==0)
//                 continue;
//             for(i=l-1; i<=l+1; i++){
//                 for(j=k-1; j<=k+1; j++){
//                     if(calc(w, h, j, i)==1){
//                         mines[i][j]+= 1;
//                     }
//                 }
//             }
//         }
//     }
//     for(l=0; l<h; l++){
//         for(k=0; k<w; k++){
//             printf("%d", mines[l][k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//18번
// int main(){
//     int i, j, k, s;
//     int el=0;
//     for(i=6; i<=30; i++){
//         s=0;
//         k=i/2;
//         for(j=1; j<=k; j++){
//             if(i%j==0){
//                 s+=j;
//             }
//         }
//         if(s==i)
//             el++;
//     }
//     printf("%d", el);
//     return 0;
// }


//19번
// int main(){
//     char a[]="Art";
//     char* p=NULL;
//     int i=0;
//     p=a;
//     printf("%s\n", a);
//     printf("%c\n", *p);
//     printf("%c\n", *a);
//     printf("%s\n", p);
//     for(i=0; a[i]!='\0'; i++)
//         printf("%c", a[i]);
//     return 0;
// }


//20번
// int main(){
//     char* a = "qwer";
//     char* b = "qwety";
//     int i, j;
//     for(i=0; a[i]!='\0'; i++){
//         for(j=0; b[j]!='\0'; j++){
//             if(a[i]==b[j])
//                 printf("%c", a[i]);
//         }
//     }
//     return 0;
// }


//21번
// int main(){
//     int input=101110;
//     int di=1;
//     int sum=0;
//     while(1){
//         if(input==0) break;
//         else {
//             sum += (input ??? ???) * di;
//             di *= 2;
//             input /= 10;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }



// 22번
// int main() {
//     int n[5] = {5,4,3,2,1};
//     int i;
//     for(i=0;i<5;i++){
//         printf("%d", 문제);
//     }
//     return 0;
// }
//답: n[(i+1)%5]



//using namespace std;

// struct Student {
//     string name;
//     int score;
// };

// int main() {
//     SetConsoleOutputCP(CP_UTF8);
//     SetConsoleCP(CP_UTF8);

//     vector<Student> students;
//     int count;

//     cout << "학생 수 입력: ";
//     cin >> count;

//     for (int i = 0; i < count; i++) {
//         Student s;

//         cout << "\n" << i + 1 << "번 학생 이름: ";
//         cin >> s.name;

//         cout << i + 1 << "번 학생 점수: ";
//         cin >> s.score;

//         students.push_back(s);
//     }

//     sort(students.begin(), students.end(), [](Student a, Student b) {
//         return a.score > b.score;
//     });

//     int total = accumulate(students.begin(), students.end(), 0,
//         [](int sum, Student s) {
//             return sum + s.score;
//         }
//     );

//     double average = static_cast<double>(total) / students.size();

//     map<char, int> gradeCount;

//     cout << "\n===== 성적표 =====\n";

//     for (const Student& s : students) {
//         char grade;

//         if (s.score >= 90) grade = 'A';
//         else if (s.score >= 80) grade = 'B';
//         else if (s.score >= 70) grade = 'C';
//         else if (s.score >= 60) grade = 'D';
//         else grade = 'F';

//         gradeCount[grade]++;

//         cout << setw(10) << s.name
//              << " | 점수: " << setw(3) << s.score
//              << " | 학점: " << grade << endl;
//     }

//     cout << "\n총점: " << total << endl;
//     cout << fixed << setprecision(2);
//     cout << "평균: " << average << endl;

//     cout << "\n===== 학점별 인원 =====\n";
//     for (const auto& pair : gradeCount) {
//         cout << pair.first << "학점: " << pair.second << "명\n";
//     }

//     cout << "\n1등: " << students[0].name << " (" << students[0].score << "점)\n";


//     cout << "\n종료하려면 Enter를 누르세요...";
//     cin.ignore();
//     cin.get();

//     return 0;
// }