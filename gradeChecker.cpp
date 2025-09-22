/*
Shrish Kushwaha
09/22/25
Grade Checkers
*/

#include <iostream>
using namespace std;

int main(){
//setting up array for multiple grades
const int grade_Num = 5;
float grades[grade_Num];
//asking for the grades
for(int i = 0; i<grade_Num;++i){
cout << "What was your " << i+1 << "st grade?" << endl;
cin >> grades[i];
}
//adding the grades into a variable
float sum;
for(int i = 0;i<grade_Num;++i){
    sum+= grades[i];
}
//gettingn the average
float average;
average = sum/grade_Num;
//checking average of the 5 grades
if(average>=90){
    cout << "A for your grade average" << endl;
}
else if(average>=80){
    cout << "B for your grade average" << endl;
}
else if(average>=70){
    cout << "C for your grade average" << endl;
}
else{
    cout << "You have a failing average of 5 of your grades";
}
    return 0;
}