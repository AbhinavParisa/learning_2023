3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.

#include<stdio.h>//header file for preprocessing
int total(int a,int b,int c){// function to get total
    return a+b+c;
}
double percentage(int p){//function to find percentage
    return (p*100)/300;
}
int main(){
    int rollno,physics_marks,chemistry_marks,maths_marks;
    char name[100];
    printf("Enter the student roll no");
    scanf("%d",&rollno);
    printf("Enter the name of student");
    scanf("%s",name);
    printf("Enter the marks of student in Physics,Chemistry and Maths");
    scanf("%d %d %d",&physics_marks,&chemistry_marks,&maths_marks);
    printf("\n The Name of student is %s, Roll No is %d and marks secured in physics are %d,marks secured in chemistry are %d, marks secured in Maths are %d",name,rollno,physics_marks,chemistry_marks,maths_marks);
    printf("\n the total marks of student in all subjects is %d",total(physics_marks,chemistry_marks,maths_marks));
    printf("\n The percentage of student is %f",percentage(total(physics_marks,chemistry_marks,maths_marks)));
    return 0;

}
