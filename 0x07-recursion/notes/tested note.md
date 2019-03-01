<span class="jr-highlight-yellow" id="jr-1551451997974">Recursion</span> is a programming technique that allows the programmer to express
operations in terms of themselves.  I<span class="jr-highlight-yellow" id="jr-1551452007919">n C, this takes the form of a function
that calls itself.  A useful way to think of recursive functions is to imagine
them as a process being performed where one of the instructions is to "repeat
the process".</span>  <span class="jr-highlight-yellow" id="jr-1551452067207">This makes it sound very similar to a loop because it repeats
the same code, and in some ways it </span><em><span class="jr-highlight-yellow" id="jr-1551452067208">is</span></em><span class="jr-highlight-yellow" id="jr-1551452067208"> similar to looping.  On the
other hand, recursion makes it easier to express ideas in which the result of
the recursive call is necessary to complete the task.  Of course, it must be
possible for the "process" to sometimes be completed without the recursive
call.  One simple example is the idea of building a wall that is ten feet
high; if I want to build a ten foot high wall, then I will first build a 9
foot high wall, and then add an extra foot of bricks.  Conceptually, this is
like saying the "build wall" function takes a height and if that height is
greater than one, first calls itself to build a lower wall, and then adds one
a foot of bricks.</span>
