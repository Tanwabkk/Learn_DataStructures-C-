#include <iostream>
using namespace std;

int main() 
{
    
    int numStudents;

    cout << "Enter the numbers of student (max 50): "; 
    cin >> numStudents; 

    // create an array to hold up to 50 value  
    double grade[50];

    // input the grades into the array
    for(int i = 0; i < numStudents; i++){

        cout << "Enter the grade for student " << (i + 1) << ": "; 
        cin >> grade[i]; 
    }


    // calculate and process the data inside the array 
    double sum = 0; 
    double highest = grade[0];

    for(int i = 0; i < numStudents; i++ ){
        sum += grade[i]; // this adds up all the grades 
        if(grade[i] > highest){
            highest = grade[i]; // this finds the biggest number in the array
        }
    }

    double average = sum/numStudents;

    cout << "\n--- Statistics ---" << endl;
    cout << "Average Grades: " << average << endl;
    cout << "Highest Grade: " << highest << endl; 


    return 0;
}
