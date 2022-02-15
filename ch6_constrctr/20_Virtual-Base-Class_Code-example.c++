#include <iostream>
using namespace std;
// virtual base class banake inherit karne se, duplicate inheritance of same variable and ambiguity se hum bach sakte hei,yaha,rollNo 2 bar nahi ,sirf ek bar inherite hoga, and ambiguity se bhi bach gaye..., taki hum class ki saare members ko bas ek time mei  baar use kare taki ambiguity na ho..., virtual base banane se ,sirf ek baar member functios and data member niche jata hei
class student
{
protected:
    int roll_no;

public:
    void setNo(int a)
    {
        roll_no = a;
    }
    void printNo()
    {
        cout << "your roll no. is : " << roll_no << endl;
    }
};
class test : virtual public student  //or you can use -> public virtual or vice versa
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks()
    {
        cout << "Your result is here : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printScore()
    {
        cout << "Your PT score is : " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printNo();
        printMarks();
        printScore();
        cout << "Total Score is : " << total << endl;
    }
};
int main()
{
    result s;
    s.setNo(30);
    s.setMarks(99,97);
    s.setscore(94);
    s.display();
    return 0;
}