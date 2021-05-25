#include <iostream>
#include <cmath>

using namespace std;

//function stubs
//example function, stub
void sayHi(string name, int age);

//return statment, function stub
double cube(double base);

//stub for if statement example
int getMax(int num1, int num2, int num3);

//stub for switch statement function
string getDayOfWeek(int dayNum);

//exponent function stub
int power(int base, int power);

//class examples
//creates "Book" datatype w/ three attributes
class Book {
    public:
        string title;
        string author;
        int pages;

        //default constructor, assigns attributes values if none are passed as arguments
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }

        //constructor function, allows attribute assignment with one object declaration
        Book(string c_title, string c_author, int c_pages){
            //cout << "Creating Object" << endl;
            title = c_title;
            author = c_author;
            pages = c_pages;
        }
};

//class, constructor, and function(s) for Object Functions section
class Student {
    public:
        string name;
        string major;
        double gpa;
        //constructor if object is declared with all attributes defined
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        //function to check if gpa is above a certain threshold (3.5)
        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }
};

//getters and setters class
class Movie {
    //private, only accessible within this "Movie" class
    private:
        string rating;
    public:
        string title;
        string director;
        //string rating; //moved to private field for demonstration purposes
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            //rating = aRating;
            setRating(aRating);
        }

        //function to validate and set the value for a Movie objects rating
        void setRating(string aRating){
            //checks if argument is a valid rating choice
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR"; //default value if argument was invalid
            }
        }

        //function used to print out actual rating since it's now a private variable
        string getRating(){
            return rating;
        }
};

//class for inheritance example
class Chef {
    public:
        void makeChicken(){
            cout << endl << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << endl << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << endl << "The chef make bbq-ribs" << endl;
        }
};
//ItalianChef inherits all functionality from Chef
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << endl << "The chef makes pasta" << endl;
        }
        //override example
        void makeSpecialDish(){
            cout << endl << "The chef make chicken parm" << endl;
        }
};

int main()
{
    
    //first steps, hello world!
    cout << "Hello world!\n" << endl;
    //cout << endl;

    //@@@@@@@@@@@@@@@@@@@
    //variables
    string character_Name = "John";
    int character_Age = 35;

    cout << "*Basic String / Integer Demonstration*: " << endl;
    //how to print out string and int variables
    cout << "There once was a man named " << character_Name << endl;
    cout << "He was " << character_Age << " years old" << endl;
    cout << "He liked the name " << character_Name << endl;
    cout << "But did not like being " << character_Age << "\n" << endl;
    //cout << endl;

    //@@@@@@@@@@@@@@@@@@@
    //data types
    char grade = 'A';
    string phrase = "Academy";
    int age = 50;
    double gpa = 3.14; //float can also be used for numbers w/ decimals
    bool isMale = true;

    //@@@@@@@@@@@@@@@@@@
    //working w/ strings

    cout << "*Displaying different attributes of a string or substrings within*" << endl;
    cout << "Length of " << phrase << ": " << phrase.length() << endl;
    cout << "First and last letter of " << phrase << ": " << phrase[0] << phrase[phrase.length() - 1] << endl;
    phrase[0] = 'B';
    cout << "String after statically setting first letter to a 'B': " << phrase << endl;
    //finds index in string that matches w/e you're searching for
    cout << "Finding starting index for substring 'demy' in " << phrase << ": " << phrase.find("demy", 0) << endl;
    //substr used to pull "substrings" out of string variables, starting at index 2 pulls 3 next characters
    cout << "Pulling subtring from " << phrase << " starting at index 2 with 3 following chars: " << phrase.substr(2, 3) << "\n" << endl;


    //@@@@@@@@@@@@@@@@@@
    //working w/ numbers
    //#include <cmath>

    int whole_num = 5;
    double decimal_num = 5.5;

    cout << "*Working with numbers*: " << endl;
    //whole numbers used w/ decimal numbers will always result in a decimal
    cout << whole_num << "+" << decimal_num << "=" << whole_num + decimal_num << endl;
    //uses math library, 2^5
    cout << "2^5=" <<pow(2,5) << endl;
    //square root of 25
    cout << "Square root of 25: " << sqrt(25) << endl;
    //rounding a decimal
    cout << "Rounding " << decimal_num << " to nearest integer: " << round(decimal_num) << endl;
    cout << "Rounding 4.1 up to nearest integer through \"ceil\" function: " << ceil(4.1) << endl; //ceiling, rounding up
    cout << "Rounding 4.9 down to nearest integer through \"floor\" function: " << floor(4.9) << endl; //floor, rounding down
    cout << "Finding the max in a list with the values 3 and 10: " << fmax(3, 10) << endl;//fmax, finding max from input
    cout << "Finding the minimum in a list with the values 3 and 10: " << fmin(3, 10) << endl << "\n";//fmin, finding min from input


    //@@@@@@@@@@@@@@@@@@@@
    //user inputs

    cout << "*Working with user inputs*" << endl;
    cout << "Enter your age: ";
    cin >> age; //cin used to take in user input, using age int var from example earlier
    cout << "You are " << age << " years old" << endl << "\n";

    cin.ignore(); //necessary between mixing inputs "cin" and "getline()" function, flushes out newline character out of buffer
    //pulling string input from user requires different approach using the "getline" command, example below
    string name; //declaring string var
    cout << "Enter your name: ";
    getline (cin, name); //required for user inputs that will be strings
    name[0] = toupper(name[0]); //quick way to capitalize first letter of a string w/ "toupper" function
    cout << "Hello " << name << endl << "\n";

    //@@@@@@@@@@@@@@@@@@@@@
    //calculator example, user input (numbers)
    double num1, num2; //short-hand variable declaration for two doubles

    cout << "*Simple Calculator*: Enter two numbers then they will be added" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl << "\n"; //message displaying numbers entered and sum when added together

    //@@@@@@@@@@@@@@@@@@@@
    //mad lib game demo
    string color, plural_Noun, celebrity;

    cin.ignore(); //input ignore command to clear newline character
    cout << "*Mad Lib Game*:" << endl;
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, plural_Noun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << endl << "Roses are " << color << endl;
    cout << plural_Noun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    
    //@@@@@@@@@@@@@@@@@@@@@
    //arrays
    int lucky_Nums[] = {7,11,13,17,19,23}; //array declaration, requires values or array size
    cout << endl << "*Arrays*" << endl;
    cout << "Index 0 in array statically populated with (7, 11, 13, 17, 19, 23): " << lucky_Nums[0] << endl << "\n";


    //@@@@@@@@@@@@@@@@@@@@@
    //functions
    //function used located above main
    cout << "*Functions*" << endl;
    sayHi("Billus", 29);
    

    //@@@@@@@@@@@@@@@@@@@@
    //return statements
    cout << "*Return Statements*" << endl;
    double result = cube(2);
    cout << "2 cubed = " << result << endl << "\n";
    

    //@@@@@@@@@@@@@@@@@@@@
    //if statements
    cout << "*If Statements w/ Boolean Variables*" << endl;
    bool is_Male = false;
    bool is_Tall = false;

    //if statment checking for boolean values
    if(is_Male && is_Tall){
        cout << "You are a tall male" << endl;
    } else if (is_Male && !is_Tall) {
        cout << "You are a male that is not tall" << endl;
    }else if (!is_Male && is_Tall) {
        cout << "You are tall but not male" << endl;
    }else {
        cout << "You are not a tall male" << endl;
    }
    cout << "\n"; //new line between examples


    //printint out result from "getMax" function, if statement with comparators
    cout << "From a set with (1,2,3): " << getMax(1, 2, 3) << " is largest!" << endl;
    cout << "From a set with (3,2,1): " << getMax(3, 2, 1) << " is largest!" << endl;
    cout << "From a set with (5,5,3): " << getMax(5, 5, 3) << " is largest!" << endl << "\n";


    //@@@@@@@@@@@@@@@@@@@@@@@
    //calculator, mk.2
    //calculates "on-the-fly" by asking for first number, what operation to take place, then second number
    double num_1, num_2;
    char op; //operator variable, used to designate what will happen to both numbers

    cout << "*Calculator w/ user choosing operation (-,+,*,/)" << endl;
    cout << "Enter first number: ";
    cin >> num_1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num_2;

    double calc_result; //variable to hold result from operation that will take place below

    if(op == '+'){
        calc_result = num_1 + num_2;
    } else if(op == '-') {
        calc_result = num_1 - num_2;
    } else if(op == '/') {
        //additional if statement to make sure we're not dividing by 0
        if(num_2 != 0){
            calc_result = num_1 / num_2;
        }
        else {
            cout << "Cannot divide by 0" << endl;
            calc_result = 0;
        }
    } else if(op == '*') {
        calc_result = num_1 * num_2;
    } else {
        cout << "Invalid Operator (+, -, /, *)" << endl;
        calc_result = 0; //defaulting result to 0 if no operation took place
    }

    cout << num_1 << op << num_2 << "=" << calc_result << endl << "\n";


    //@@@@@@@@@@@@@@@@@@@@@@@
    //Switch Statements
    //uses "getDayOfWeek" function with switch for each day of the week (0-6), also has default for invalid input
    cout << "*Switch Statements*: Uses a switch case with 0-6 equaling days of the week" << endl;
    cout << "0 entered: " << getDayOfWeek(0) << endl;
    cout << "5 entered: " << getDayOfWeek(5) << endl;
    cout << "10 entered: " << getDayOfWeek(10) << endl << "\n";



    //@@@@@@@@@@@@@@@@@@@@@@@@
    //while loops

    int index = 1; //unneccessary variable for looping demonstration

    cout << "*While Loops*" << endl;
    cout << "While loop between 1:5" << endl;
    while(index <= 5){
        cout << index << endl;
        index++; //incrementing condition variable
    }

    cout << "\nDo-While loop, 1:5" << endl;
    index = 1; //resetting index for do-while loop demo below

    do{
        cout << index << endl;
        index++; //incrementing condition variable
    } while (index <= 5);
    cout << "\n";


    //@@@@@@@@@@@@@@@@@@@@@@@@
    //guessing game example
    cout << "*Guessing Game*: Three chances to guess a number, spoiler alert: it's 7" << endl;

    int secret_num = 7; //number to guess
    int guess; //var for user input (guess)
    int guessCount = 0; //how many times the user has guessed
    int guessLimit = 3; //number of guesses allowed before loss
    bool outOfGuesses = false; //boolean flag for if you lose

    //while loop to keep prompting user for input until they either guess correctly or run out of attempts
    while(guess != secret_num && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Make your guess(" << (guessLimit-guessCount) << " remaining): ";
            cin >> guess;
            guessCount++;
        }else {
            outOfGuesses = true; //user has lost
        }
    }

    if(!outOfGuesses){
        cout << "You win!" << endl << "\n";
    }else{
        cout << "You lose!" << endl << "\n";
    }



    //@@@@@@@@@@@@@@@@@@@@@@@
    //for loops

    int nums[] = {1,3,9,2,5};

    cout << "*For Loops*: Iterating through an array with 5 elements" << endl;
    //for loop to iterate through all indexs of array "nums", needs some whacky "sizeof" division to find length
    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        cout << "Element(" << i << "): " << nums[i] << endl;
    }


    //@@@@@@@@@@@@@@@@@@@@@@@@
    //exponent function

    cout << endl << "*Exponent Functions*: built into math library" << endl;
    cout << "2^4=" << power(2,4) << endl; // 2^4
    cout << "4^2=" << power(4,2) << endl; // 4^2
    cout << "5^5=" << power(5,5) << endl << "\n"; // 5^5



    //@@@@@@@@@@@@@@@@@@@@@@@@@
    //2d arrays & nested loops
    cout << "*2D Arrays*" << endl;

    //declaration of 2d array, first [] how many elements, second [] how many nums in each element
    int num_Grid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    //dynamically iterate through 2d array w/ "sizeof" functions like previous example
    for(int i = 0; i < sizeof(num_Grid)/sizeof(num_Grid[0]); i++){
        for(int j = 0; j < sizeof(num_Grid[0])/sizeof(num_Grid[0][0]); j++){
            cout << "Element(" << i << ", " << j << "): " << num_Grid[i][j] << endl;
        }
    }


    //@@@@@@@@@@@@@@@@@@@@@@@@
    //pointers

    int age_ptr = 19;
    double gpa_ptr = 2.7;
    string name_ptr = "Bill";

    cout << endl << "*Pointers*" << endl;
    cout << "Memory address of \"age_ptr\": " << &age_ptr << endl; // '&' is used to reference an actual address (pointer) of a variable
    cout << "Memory address of \"gpa_ptr\": " << &gpa_ptr << endl;
    cout << "Memory address of \"name_ptr\": " << &name_ptr << endl; // calling "*&name_ptr" would display "Bill", dereferences the memory address all in one call

    int *pAge_ptr = &age_ptr; //pointer variable using '*' in declaration
    double *pGpa_ptr = &gpa_ptr;
    string *pName_ptr = &name_ptr;

    cout << endl << pAge_ptr << endl;
    cout << pGpa_ptr << endl;
    cout << pName_ptr << endl;

    //dereferencing a pointer example
    cout << "Dereferencing a pointer variable so it will show values set in the program instead of memory address: " << endl;
    cout << endl << *pAge_ptr << endl; //dereferenced, using assigned value instead of memory address when calling with '*'
    cout << *pGpa_ptr << endl;
    cout << *pName_ptr << endl << "\n";


    //@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Classes and Objects
    //uses "Book" class declared above main
    cout << "*Classes and Objects*" << endl;

    string name_co = "Bill";
    double pi = 3.14;
    char fav_letter = 'G';

    //creating Book "object" (book1) then assigning it's attributes w/ values
    Book book1("Biography of Billus", "Billus R", 1001);
    //book1.title = "Biography of Billus";
    //book1.author = "Billus R";
    //book1.pages = 1001;

    cout << endl << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Length: " << book1.pages << " pages" << endl;

    //second object declaration and attribute assignment
    Book book2("Lord of the Rings", "J. R. R. Tolkien", 700);
    //book2.title = "Lord of the Rings";
    //book2.author = "J. R. R. Tolkien";
    //book2.pages = 700;

    cout << endl << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Length: " << book2.pages << " pages" << endl;

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Constructor Functions
    //addition into the "Book" class, allows objects to be assigned attribute values on declaration

    //empty book object to demonstrate how default constructor methods can be used
    Book book3;
    cout << endl << "Title: " << book3.title << endl;
    cout << "Author: " << book3.author << endl;
    cout << "Length: " << book3.pages << " pages" << endl;

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Object Functions, aka instance functions
    //uses "Student" class setup above main
    cout << endl << "*Object Functions*" << endl;

    //object declarations
    Student student1("Howard", "Computer Science", 3.3);
    Student student2("Joe", "Communications", 3.8);

    cout << endl << student1.gpa << " is lower than 3.5, so false (0) is returned: " << student1.hasHonors() << endl; //checks if gpa is >= 3.5, function "hasHonors" from Student class, returns 0 for false 1 for true
    cout << student2.gpa << " is higher than 3.5, so true (1) is returned: " << student2.hasHonors() << endl;



    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Getters and Setters
    //uses "Movie" class setup above main
    cout << endl << "*Getters and Setters*" << endl;

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << endl << "Originally declared rating: " << avengers.getRating() << endl;

    avengers.setRating("Nonsense!"); //setting rating to an invalid value
    cout << "Rating after invalid value is updated: " << avengers.getRating() << endl;

    avengers.setRating("R");
    cout << "Rating after valid rating \"R\" is updated: " << avengers.getRating() << endl;


    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Inheritance
    //uses "Chef" and "ItalianChef" class setup above main
    cout << endl << "*Inheritance*" << endl;

    //baseline object, "superclass"
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    //object from inherited class, "subclass"
    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish(); //override example

    //END main
    //return value to satisfy main function
    return 0;
}

//exponent example function
int power(int base, int power){
    int result = 1; //variable to hold result, starts at 1 to be multiplied into w/e the base will be

    for(int i = 0; i < power; i++){
        result = result * base; //multiplying result by the base num repeatedly to represent base^power
    }

    return result;
}

//function for switch statements
string getDayOfWeek(int dayNum) {
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Input";
    }

    return dayName;
}

//function to find larger of two input integers
int getMax(int num1, int num2, int num3)
{
    int result; //variable to hold result

    //setting result var equal to parameter if it is the largest
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

//return statement example, defining cube function from stub above main
double cube(double base)
{
    //using math "pow" function to cube then return input parameter
    return pow(base, 3);
}

//defining function "sayHi", stub declared above main
void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl << "\n";
}