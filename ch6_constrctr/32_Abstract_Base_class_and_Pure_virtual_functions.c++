#include<iostream>
#include<string.h>
using namespace std;
// Abstract base class--> classes which are made so that we can derive more classes from them , you can't make  objects from this type of  base class  | abstract base class contain atlest one pure virtual function 
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display()=0;  // do-nothing function  --> pure virtual function : function jisko apko override karna hi padega har ek derived class mei, mtlb unko define karna hi padega har ek derived class mei jo ki base class se derived hui hei ig
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
    tut[1]->display();  
    return 0;
}