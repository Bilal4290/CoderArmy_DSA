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

            cout << "Invalid Input! Please enter a number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }

        while(true){
            if(num > 0){
                break;
            }

            cout << "Invalid Input! Please enter a positive number." << endl;
            cout << prompt;
            cin >> num;
        }

        return num;
    }



 

    int main(){

        int num = validateInput("Enter a number: ");

        int sum = 0;

        for(int i = 1; i <= num; i++){
            sum = sum + (i*i*i);
        }

        cout << "Sum: " << sum;

        return 0;
    }
