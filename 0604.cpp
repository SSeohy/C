#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <map>

using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<Student> students;
    int count;

    cout << "학생 수 입력: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        Student s;

        cout << "\n" << i + 1 << "번 학생 이름: ";
        cin >> s.name;

        cout << i + 1 << "번 학생 점수: ";
        cin >> s.score;

        students.push_back(s);
    }

    sort(students.begin(), students.end(), [](Student a, Student b) {
        return a.score > b.score;
    });

    int total = accumulate(students.begin(), students.end(), 0,
        [](int sum, Student s) {
            return sum + s.score;
        }
    );

    double average = static_cast<double>(total) / students.size();

    map<char, int> gradeCount;

    cout << "\n===== 성적표 =====\n";

    for (const Student& s : students) {
        char grade;

        if (s.score >= 90) grade = 'A';
        else if (s.score >= 80) grade = 'B';
        else if (s.score >= 70) grade = 'C';
        else if (s.score >= 60) grade = 'D';
        else grade = 'F';

        gradeCount[grade]++;

        cout << setw(10) << s.name
             << " | 점수: " << setw(3) << s.score
             << " | 학점: " << grade << endl;
    }

    cout << "\n총점: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "평균: " << average << endl;

    cout << "\n===== 학점별 인원 =====\n";
    for (const auto& pair : gradeCount) {
        cout << pair.first << "학점: " << pair.second << "명\n";
    }

    cout << "\n1등: " << students[0].name << " (" << students[0].score << "점)\n";


    cout << "\n종료하려면 Enter를 누르세요...";
    cin.ignore();
    cin.get();

    return 0;
}