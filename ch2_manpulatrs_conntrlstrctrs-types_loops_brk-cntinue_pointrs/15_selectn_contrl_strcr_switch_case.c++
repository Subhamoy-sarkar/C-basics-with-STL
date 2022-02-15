#include <iostream>
using namespace std;
int main()
{
    int rating;
    cout << "Plz rate our app ( between _ (1 to 5) ) ,Plz-if you happy with our services ,plz give a five star:" << endl;
    cin >> rating;
    switch (rating)
    {
    case 1:
        cout << "Sorry for your inconvenience , plz leave a review and give us suggestion how to improve our app.";
        break;
    case 2:
        cout << "Sorry for your inconvenience , plz leave a review and give us suggestion how to improve our app.";
        break;
    case 3:
        cout << "Thanks for you review, plz leave suggestions on how to improve our app ";
        break;
    case 4:
        cout << "Wow thanks , plz leave any suggestion on how to improve to get 5 stars from our beloved customers";
        break;
    case 5:
        cout << "Thanks a lot sir/mam, we hope we will meet your expectation  in future too, leave suggestions, if any";
        break;
    default:
        cout << "Wrong input!!";
        break;
    }
    return 0;
}