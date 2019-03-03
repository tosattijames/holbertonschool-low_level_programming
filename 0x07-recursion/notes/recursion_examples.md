<h1>Lesson 16: Recursion in C</h1>


Recursion iIn C, this takes the form of a function that calls itself. 
--
A useful way to think of recursive functions is to imagine them as a process being performed where one of
the instructions is to "repeat the process". This makes it sound very similar to a loop because it repeats 
the same code, and in some ways it is similar to looping. On the other hand, recursion makes it easier to 
express ideas in which the result of the recursive call is necessary to complete the task. Of course, it
must be possible for the "process" to sometimes be completed without the recursive call. One simple example
is the idea of building a wall that is ten feet high; if I want to build a ten foot high wall, then I will 
first build a 9 foot high wall, and then add an extra foot of bricks. Conceptually, this is like saying
the "build wall" function takes a height and if that height is greater than one, first calls itself to build a 
lower wall, and then adds one a foot of bricks.
--
--
A simple example of recursion would be:

void recurse()
{
recurse(); /* Function calls itself */
}

int main()
{
recurse(); /* Sets off the recursion */
return 0;
}

--
This program will not continue forever, however.
The computer keeps function calls on a stack and once 
too many are called without ending, the program will crash.
--
Why not write a program to see how many times the function is called before the program terminates?
#include <stdio.h>
--
void recurse ( int count ) /* Each call gets its own copy of count */
{
printf( "%d\n", count );
/* It is not necessary to increment count since each function's
variables are separate (so each count will be initialized one greater)
*/
recurse ( count + 1 );
}

int main()
{
recurse ( 1 ); /* First function call, so it starts at one */
return 0;
}
--
This simple program will show the number of times the recurse function has been called by
initializing each individual function call's count variable one greater than it was previous by
passing in count + 1. Keep in mind that it is not a function call restarting itself; it is hundreds of 
function calls that are each unfinished
--
The best way to think of recursion is that each function call is a "process" being carried 
out by the computer. If we think of a program as being carried out by a group of people who 
can pass around information about the state of a task and instructions on performing the task, 
each recursive function call is a bit like each person asking the next person to follow the 
same set of instructions on some part of the task while the first person waits for the result.
--
At some point, we're going to run out of people to carry out the instructions, just as our previous 
recursive functions ran out of space on the stack. There needs to be a way to avoid this! To halt a 
series of recursive calls, a recursive function will have a condition that controls when the function 
will finally stop calling itself. The condition where the function will not call itself is termed the
base case of the function. Basically, it will usually be an if-statement that checks some variable 
for a condition (such as a number being less than zero, or greater than some other number) and if 
that condition is true, it will not allow the function to call itself again. (Or, it could check
if a certain condition is true and only then allow the function to call itself).


