#include <iostream> //provides proper definitions, includes "copy & paste" the content of a header file
using namespace std; //using the "std" namespace
/*issue with this problem is myFunction is not declared before the main function, hence the compiler interprets the function call to myFunction as undeclared function.
 */

//fix to the code is declare the function before main.

double myFunction(int n);                        //declaring myFunction, function entrance, defintion of name, datatype, and input parameter (pass arguments to function)

int main(int argc, char *argv[]) // program entry point, required for every program "main"
{
    int p = myFunction(10);             //calls myFunction with value 10 and stores the value returned by the function in p
    cout << p << endl;                  //prints the output of "p" on the terminal, defined by the namespace "std"
}

double myFunction(int n) {              //defining myFunction
    unsigned int i = 0, j = 1, t, k;    //initializing i,j,t,k
    for (k=0; k <= n; ++k)              //for loop runs 11 times from 0 to 10(value passed to function from main). for loop beginning at 0, while k is less than n, increasing by a value of k incrementally
    {
        t = i + j;                      //t stores sum of i and j in each run of the for loop
        i = j;                          //value in i is swapped with value in j
        j = t;                          //value in j is swapped with value in t
    }
    return j;
//after the for loop value stored in j is returned to main function where the call was originated and stores the value in p.
}

