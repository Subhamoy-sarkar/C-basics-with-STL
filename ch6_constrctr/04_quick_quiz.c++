#include<iostream>
#include<cmath>
#include<math.h>
using namespace std; 
class point {
    int a, b;
    friend void distance(point,point);
    public:
    point(int x, int y ){
        a=x;b=y;
    }
};
void distance(point p1, point p2){
    double res=sqrt(pow(p1.a-p2.a,2)+ pow(p1.b-p2.b,2));
    cout<<"The distance between the given points is : "<<res<<"cm"<<endl;
}
int main(){
    point a(20,20);
    point b=point(10,10);
    distance(a,b);
    return 0;
}