#include <iostream>
#include <string>  
using namespace std;


int getValidInput(string prompt){
    int num;
     while(true){
        cout << prompt;
        cin >> num;

        if(!cin.fail() && cin.peek() == '\n'){
              break;
        }

        cout << "Invalid Input! Please, enter a valid number." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
     }
    return num;
}

int main() {
    int num = getValidInput("Enter a number: ");

    cout << "Numbers from 1 to " << num << " that are divisible by 4: ";

    for(int i=1; i <= num; i++){
        if(i % 4 == 0){
            cout << i << " ";
        }
    }

   

    return 0;
}


