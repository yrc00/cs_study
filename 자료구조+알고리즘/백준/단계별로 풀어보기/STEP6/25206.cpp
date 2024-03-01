#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int main()
{
    string subject[20];
    string grade_alpha[20];
    double score[20];
    double sum = 0, total = 0;

    for(int i=0; i<20; i++){
        cin >> subject[i] >> score[i] >> grade_alpha[i];
    }

    for(int i=0; i<20; i++){
        double grade = 0;
        if(grade_alpha[i].compare("A+")==0) grade = 4.5;
        else if(grade_alpha[i].compare("A0")==0) grade = 4.0;
        else if(grade_alpha[i].compare("B+")==0) grade = 3.5;
        else if(grade_alpha[i].compare("B0")==0) grade = 3.0;
        else if(grade_alpha[i].compare("C+")==0) grade = 2.5;
        else if(grade_alpha[i].compare("C0")==0) grade = 2.0;
        else if(grade_alpha[i].compare("D+")==0) grade = 1.5;
        else if(grade_alpha[i].compare("D0")==0) grade = 1.0;
        else if(grade_alpha[i].compare("F")==0) grade = 0.0;
        else if(grade_alpha[i].compare("P")==0) continue;

        sum += score[i] * grade;
        total += score[i];

    }

    cout << sum/total;

    return 0;
}