#include <iostream>
using namespace std;

//function for check armstrong number
bool isarmstrong(int n) {

    //variable declration and inilization
    int copyN = n;
    int sumQ = 0;

    //extraction digits
    while(n != 0) {
        int digit = n%10;
        sumQ = sumQ+(digit*digit*digit);
        n = n/10;
    }

    //return boolean
    return sumQ == copyN;
}

int main() {

    //input digits
    int n;
    cout << "Enter digits: " <<endl;
    cin>>n;

    //use condition logic
    if(isarmstrong(n)) {
        cout << "digits are armstrong number." <<endl;
    } else {
        cout << "digits are not armsotrong number." << endl;
    }

    return 0;
}