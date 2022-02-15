#include<iostream>
#include<string.h>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){
         cout<<"bogus code ;"<<endl;
    }
};
class CWHvideo: public CWH{
    float videolength;
    public:
    CWHvideo (string s, float r, float vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"This is an amazing video with title : "<<title<<endl;
        cout<<"Ratings: "<<rating <<"out of 5 stars"<<endl;
        cout<<"The length of this video is : "<<videolength<<" minutes"<<endl;
    }
};
class CWHtext: public CWH{
    int words;
    public:
    CWHtext (string s, float r, int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title : "<<title<<endl;
        cout<<"Ratings: "<<rating <<" out of 5 stars"<<endl;
        cout<<"The No. of words in this  text tutorial is : "<<words<<" words "<<endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for CWHVideo:
    title="django tutorial";
    vlen=23.56;
    rating=4.89;
    CWHvideo video(title,rating, vlen);
    // video.display();

    // for CWHtext:
    title="django tutorial text .";
    words=343;
    rating=4.24;
    CWHtext text(title,rating,words);
    // text.display();

    CWH *tut[2];
    tut[0] = &video;
    tut[1]=&text;

    tut[0]->display();
    tut[1]->display();  //agr text/video or both class ka display function nahi rahega toh , uski jagah base class ka display fnctn run hoga ;
    return 0;
}

// Rules for virtual function :

// 1. They cannot be static.
// 2.They accessed by object pointers.
// 3. virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used. 
// 5. If virtual function defined in teh base class, there is no necessity of redefining in dereived class.