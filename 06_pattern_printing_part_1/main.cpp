#include <iostream>
using namespace std;

int validateInput(string prompt){
    int num;

    while(true){
        cout << prompt;
        cin >> num;

        if(!cin.fail() && cin.peek() == '\n'){
            break;
        }

        cout << "Invalid input! Please enter a valid input." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }

    while(true){
        if(num > 0 && num < 27){
            break;
        }

        cout << "Invalid input! Number must be exist between 1 and 26." << endl;
        cout << prompt;
        cin >> num;

        while(true){
    
            if(!cin.fail() && cin.peek() == '\n'){
                break;
            }
    
            cout << "Invalid input! Please enter a valid input." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << prompt;
            cin >> num;
        }
    }

    return num;
}

int main(){

    int end = validateInput("Enter end number: ");
    for(int row=1; row<=end; row++){
        char ch='A';
        for(int col=1; col<=end; col++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}


