/*I want to create a program which will track the grades,
 names and registration numbers for 3 students. The program
 should print out the details of these 3 students and calculate
 their average grade. (The grade average should be calculated by a loop)*/

#include <iostream>
#include <string>
using namespace std;

struct student
{
    string Registration;
    string Name;
    double Grade;
};

int main()
{
    double totalSum, average;
    student pupil[3];

    pupil[0].Registration = "J17";
    pupil[0].Name = "Shadrack Mwangi";
    pupil[0].Grade = 85.6;

    pupil[1].Registration = "J18";
    pupil[1].Name = "Andrew Mburu";
    pupil[1].Grade = 82.5;

    pupil[2].Registration = "J19";
    pupil[2].Name = "Naomi Nyambura";
    pupil[2].Grade = 87.9;

    for (int i = 0; i < 3; i++)
    {
        cout << "Student # " << (i + 1) << endl;
        cout << "Registration Number: " << pupil[i].Registration << endl;
        cout << "Name: " << pupil[i].Name << endl;
        cout << "Grade: " << pupil[i].Grade << endl;
        cout << '\n';

        totalSum += pupil[i].Grade;
    }
    average = totalSum / 3;

    cout << average << endl;

    return 0;
}

/*for(int i=0;i<3;i++){
    cout<<"Student # " <<  (i+1) << " :" << pupil[i].Grade<< endl;
    cout<< pupil[i].Grade /3;


}*/
