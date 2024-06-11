#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;

	for(int i=1;i<=5;i++)
	{
		cout<<"Enter a number between 1 to 100: "<<endl;
		cin>>guess;
	    if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high ! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly."<< endl;
        break;
		}
        cout<< 5 - i<<" attempts left"<<endl;
}
    cout<<"your attempt finished,come back later";
    return 0;
}
