to open a file use: 
	infile.open("file.txt"); 
	getling(infile, name); // reads a will line from a file opened using (infile) and stored under name. 
	while(infile) to work on a file you don't know it's size (opened using "infile" for example).
to compile
> g++ p70.C candy.cpp header.h
> ./a.out

other options for compiling:
gcc -Wall print.c -o print
-Wall – gcc flag that enables all warnings. -W stands for warning, and we are passing “all” to -W
-o print – Instruct C compiler to create the C executable as print. If you don’t specify -o, by default C compiler will create the executable with name a.out

You can use:
gcc -Wall -E print.c
which will print the preprocessed output to stdout.

gcc -Wall -save-temps print.c -o print
-save-temps’ flag instructs compiler to store the temporary intermediate files used by the gcc compiler in the current directory.

This saves details in 3 files:
print.ii //for pre-processing
print.s //compliling
print.o //assembly

For an example see http://www.thegeekstuff.com/2011/10/c-program-to-an-executable/comment-page-1/#comment-130363


static_cast<dataTypeName>(expression)  //used to evaluate expression and express it's value in the data type needed. 
