#include<iostream>
using namespace std; 
int main(){
    for (int i = 0; i < 5; i++)
    {
        if(i==4){
            continue;// abhi jo iteration hei usko rok do yahi par, agle iteration mei chale jao , matlb loop mei jo iske baad wala..
        //                                                                                           .. iteration hei usme chale jao
        }
        cout<<i<<endl;
        // if(i==3){
        //     break;                // iss loop ko tod do yahi par , aur mat run karo, complete stop.. aur loop ke bahar chale jao
        // }
    }
    return 0;
}