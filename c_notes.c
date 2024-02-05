// C NOTES

//	KEYWORDS
//	https://www.geeksforgeeks.org/keywords-in-c/
//		auto
/*
	Storage Class - Automatic variables
	auto is a default storage class that is declared inside a function or block.
 	auto variables can only be accessed within the function or block that they are declared, this makes their scope local.
  	By default, auto variables have garbage values assigned to them.
*/
//		break
/*
	The break statement is used to terminate the innermost loop.
 	Note: it is best to add a break statement after every case so that switch statement doesn’t continue checking the remaining cases. (?)
	However, LS believes he was taught in University to avoid using break statements as they are bad programming practice
*/
//		case
//		char
//		const
//		continue
//		default
//		do
//		double
//		else
//		enum
//		extern
/*
	The extern keyword is used to declare a variable or a function that has an external linkage outside of the file declaration.
*/
//		float
//		for
//		goto
//		if
//		int
//		long
//		register
int register_main()
{
/*
	register keyword ... CPU

	https://www.skillvertex.com/blog/understanding-register-keyword-in-c/#:~:text=The%20register%20keyword%20can%20only,in%20which%20they%20are%20defined. :
 
 	"The register keyword can only be used within a block or function scope (local scope)
  	and cannot be used in the global scope (outside of any function). In C, variables declared
   	with the register keyword are local to the block or function in which they are defined."
*/
	register int var_aaa = 0;

	return 0;
)
//		return
//		short
//		signed
//		sizeof
//		static
//		struct
//		switch
//		typedef
//		union
//		unsigned
//		void
//		volatile
//		while

//	OPERATORS
//	DATA TYPES (BASIC)
//		short int
/*
	32-bit GCC compiler Memory (bytes): 2
	32-bit GCC compiler Range: -32,768 to 32,767
	32-bit GCC compiler Format Specifier: %hd
*/
//		unsigned short int 
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier
*/
2  

0 to 65,535

%hu

//		unsigned int 
/*
	32-bit GCC compiler Memory (bytes): 4
	32-bit GCC compiler Range: 0 to 4,294,967,295
	32-bit GCC compiler Format Specifier: %u
*/
//		long int 
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier
*/
4 

-2,147,483,648 to 2,147,483,647

%ld 

//		unsigned long int
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier
*/
4 

0 to 4,294,967,295 

%lu

//		long long int  
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier
*/
8

-(2^63) to (2^63)-1 

%lld 

//		unsigned long long int
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier
*/
8

0 to 18,446,744,073,709,551,615

%llu 

//		signed char
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier:
*/
1

-128 to 127 

%c

//		unsigned char 
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier:
*/
1

0 to 255 

%c

//		long double
/*
	32-bit GCC compiler Memory (bytes): 
	32-bit GCC compiler Range: 
	32-bit GCC compiler Format Specifier:
*/
16

3.4E-4932 to 1.1E+4932

%Lf 
//	ARRAYS

/*
	https://www.geeksforgeeks.org/c-arrays/
*/

//		C Array Declaration

data_type array_name [size];

// data_type array_name [size1] [size2]...[sizeN];

//		C Array Initialization

//		C Array Initialization with Declaration

// data_type array_name [size] = {value1, value2, ... valueN};

//	DATA STRUCTURES

//	PROGRAM STRUCTURE
//		Driver Code

int main()
{
	return 0;
}
