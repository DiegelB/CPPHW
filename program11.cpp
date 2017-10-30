#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

// prototypes
int numberOfStudents();
int* amtOfMovies(int studentsSurveyed1, double &avg1);
int* sortArray(int studentsSurveyed3, int *movies2);
double medianOfArray(int studentsSurveyed2, int *movies1);
int modeOfArray(int studentsSurveyed4, int *movies2);
void outputResults(double average, double median, double mode, int studentsSurveyed);

int main(){
    int studentsSurveyed, *movies; // delcares the total amount surveyed, a dynamic array
    double avg = 0, median, mode; // delcares the three stats needed (avg set to zero for running total)
    system("cls");
    studentsSurveyed = numberOfStudents(); // gets amount of students surveyed 
    movies = amtOfMovies(studentsSurveyed, avg); // gets the dynamically amended array
    movies = sortArray(studentsSurveyed, movies); // sorts the array in ascending order
    median = medianOfArray(studentsSurveyed, movies); // gets the middle 
    mode = modeOfArray(studentsSurveyed, movies); // gets the most often occurning number
    outputResults(avg, median, mode, studentsSurveyed); // outputs all the stats
}

int numberOfStudents(){
    int numOfStudent; // number of students being surveyed    
    
    cout << "Please enter the number of students that are being surveyed.\n>>";
    cin >> numOfStudent;
    cout << endl;

    return numOfStudent; // returns it as an integet
}

int* amtOfMovies(int studentsSurveyed1, double &avg1){
    int *numOfMovies, i, userInput;

    system("cls");

    numOfMovies = new int[studentsSurveyed1]; // creates a dynamic array

    cout << "Please enter the number of movies that each student saw a month:\n\n";

    for (i=0; i < studentsSurveyed1; i++){
        cout << "Student: " << i+1 << "\n>>";
        cin >> userInput;
        while(userInput < 0){ // input validation for negative numbers
            cout << "Please only enter values zero or over\n";
            cout << "Student: " << i+1 << "\n>>";
            cin >> userInput;
        }
        numOfMovies[i] = userInput; // sets the user input to the array
        avg1 = numOfMovies[i] + avg1; // gets the average by using a running total
    }
    avg1 = avg1 / studentsSurveyed1; // divides running total by total students (was passed by referance)
    return numOfMovies; // return array to the dynamic one in main()
}

// gets the median of the  sorted array
double medianOfArray(int studentsSurveyed2, int *movies1){
    double median; 
    int firstNumber, secondNumber, middle;
    int seeIfEven = studentsSurveyed2 % 2; // gets the remainder value

    if (seeIfEven == 0){ // if the array has an even amount it gets the average of the most middle 2
        firstNumber = studentsSurveyed2 / 2;
        secondNumber =  firstNumber + 1;
        median = (movies1[firstNumber-1] + movies1[secondNumber-1])/2.0; // use -1 for the dynamic array syntax
        return median;
    }
    else{ // if its odd then i just return the middle of the array 
        firstNumber = studentsSurveyed2 / 2;
        middle = movies1[firstNumber-1];
        return middle;
    }
}

// insertion sort, just sorts the array
int* sortArray(int studentsSurveyed3, int *movies2){
    int i, swap, current;
    for (i = 0; i < studentsSurveyed3; i++){
        swap = movies2[i+1];
        current = i;
        while (current >= 0 && movies2[current] > swap){
            movies2[current+1] = movies2[current];
            current = current-1;
        }
        movies2[current+1] = swap;
    } 
    return movies2;
}

// gets the most often number found, if there is none it returns the first number
int modeOfArray(int studentsSurveyed4, int *movies2){
    int currentNumber = movies2[1], mode = currentNumber, count = 1, currentMode = 1, i;

    for (i = 1+1; i < studentsSurveyed4; i++){ // use 1+1 for the dynamic array
        if (movies2[i] == currentNumber){ // if the current number equals the next numnber it increases its count
            ++count;
        }
        else{ // if a new number is found it compares it to the most found
            if (count > currentMode){
                currentMode = count;
                mode = currentNumber; // if its bigger then it sets the new mode to the current most often number
            }
            count = 1; // resets the counter for the next iteration
            currentNumber = movies2[i]; // sets the next current numbner
        }
        
    }
    return mode;

}
// outputs all the results.
void outputResults(double average, double median, double mode, int studentsSurveyed5){
    string press;
    system("cls");
    cout << "Showing results for " << studentsSurveyed5 << " students.\n";
    cout << fixed << setprecision(2);
    cout << "Average\tMedian\tMode\n"
         << average << "\t" << median << "\t" << mode << endl;
    cout << "\nPress ENTER to exit.\n";
    cin.ignore();
    getline(cin, press);
}
