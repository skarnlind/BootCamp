/*Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have
scored higher than her in the exams given during this semester.
Create a class named "Student" with the following specifications:
•An instance variable named "scores" to hold a student's 5 exam scores.
•A void input() function that reads integers and saves them to "score".
•An int calculateTotalScore() function that returns the sum of the student's scores.

Output should be how many other students have a higher score then Kriste */
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

// void Student::input(){
// s[0]={30, 40, 45, 10, 10};
// s[1]={40, 40, 40, 10, 10};
// s[2]={50, 20, 30, 10, 10};
//}

class Student
{
private:
    int score[5]; // 5 students
                  //  instance variable named "scores" to hold a student's 5 exam scores
    int numberStudent;

public:
    void input() // void input() reads integers and saves them to "score"
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Write an exam score: ";
            cin >> score[i];
        }
    }
    int calculateTotalScore()
    { // returns the sum of the student's scores
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + score[i];
        }
        return sum;
    }
};

int main()
{
    int n; // number of students
    cout<< "How many students is there? ";
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {

            count++;
        }
    }

    // print result
    cout <<"How many student have better results? " << count;
    cout << endl;
    cout << endl;

    return 0;
}