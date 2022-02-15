#include<iostream>
using namespace std; 
class Student{
    protected:
        int rollNo ;
    public:
        void set_rollNo(int);
        void get_rollNo(void);
};
void Student :: set_rollNo(int r){
    rollNo=r;
}
void Student :: get_rollNo(){
    cout<<"The roll no. is : "<<rollNo<<endl;
}

class Exam: public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks();
};
void Exam::setMarks(float m1, float m2){
    maths=m1;
    physics=m2;
}
void Exam::getMarks(){
    cout<<"The marks of maths : "<<maths<<endl<<"The marks obtained in physics : "<<physics<<endl;
}

class Result:public Exam{
    float percentage;  
    public:
        void display_Result(){
            get_rollNo();
            getMarks();
            cout<<"Your percentage(%) is : "<<(maths+physics)/2<<"% "<<endl;
        }
};
int main(){
    /* Notes:
        If we are inheriting B from A and C from B : [ A-->B-->C]
          1.  then, A is the base class for B and B is the base class for C
          2.  ABC is called inheritance path
    */
    Result subhamoy;
    subhamoy.set_rollNo(30);
    subhamoy.setMarks(99.9,97.8);
    subhamoy.display_Result();
    return 0;
}