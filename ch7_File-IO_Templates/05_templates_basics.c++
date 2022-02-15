#include<iostream>
using namespace std; 

int main(){
    // class--> object banti hei, ( toh object ke liye class ek type ka template hei;;  therefore class ek template hei)
    // template --> class banti hei  ( class ke template , template hei)
    // template is also sometimes called ' parameterized classes'
    // template se hum,class ke datatype ko variably pass kar sakte hei ( No hardcoring of variables), isse alag alag datatype ke liye alag alag class banane se bach sakte hei, aur sirf ek hi class se kaam ho jayega

    // why use template?
    //1. DRY principle(do not repeat yourself) ko aur bhi acche se follow kar sakte ho 
    //2. Generic programming

    /* Syntax for template , e.g :  
    template<class T>                                    // this template represent many classes
        class vector{ 
            T* arr;         // where T can be int, float char ..etc
            public:
            vector(T *arr){

            }
        }

    int main(){
        Vector<int>myvec(ptr);
        Vector<float>myfvec(ptr1);
    }
    */

    return 0;
}