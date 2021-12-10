# Makefile

Run '''make'''

pros: They can just edit the input and expectedOutput files for testing, no need to write code for test cases.
cons: students need to have ubuntu instead of windows cmd (as a lot of commands are linux based instead of windows based).

For TAs: It is difficult to come up with all the test cases due to different possible scenarios:
ie: a function that does print statment
ie: a function that returns a value
ie: a main program that prints statment...
Might be hard for things like the AVL tree project, but if it's just for quiz questions, wouldn't pose as much trouble.

# Catch_Framework

## Without makefile

Import the files into IDE and run as usual.

Supports both checking the output of a function and standard output.
'''Catch_Framework\std-out''' checks the standard output

Pros: easy to visualize.
Cons: Importing could be difficult from time to time (ie: Clion sometimes want you to import from existing code and you need to somehow transfer the file in to CLion instead of simply running the code.)

## With makefile

Run '''make''' and everything is checked automatically.

Pros: Easy to run
Cons: might need to know how to navigate through folders/open cmd line.
