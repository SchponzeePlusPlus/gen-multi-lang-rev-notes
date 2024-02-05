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
/*
	sizeof is a keyword that gets the size of an expression, (variables, arrays, pointers, etc.) in bytes.
*/
//		static
/*
	The static keyword is used to create static variables. A static variable is not limited by a scope and can be used throughout the program. It’s value is preserved even after it’s  scope.
*/
//		struct
/*
	The struct keyword in C programming language is used to declare a structure. A structure is a list of variables, (they can be of different data types), which are grouped together under one data type.
*/
//		switch
//		typedef
/*
	The typedef keyword in C programming language is used to define a data type with a new name in the program. typedef keyword is used to make our code more readable.
*/
//		union
/*
	The union is a user-defined data type. All data members which are declared under the union keyword share the same memory location.
*/
//		unsigned
//		void
/*
	The void keyword means nothing i.e, NULL value. When the function return type is used as the void, the keyword void specifies that it has no return value.
*/
//		volatile
/*
	The volatile keyword is used to create volatile objects.
 	Objects which are declared volatile are omitted from optimization as their values can be changed by code outside the scope of the current code at any point in time.
*/
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
	32-bit GCC compiler Memory (bytes): 2
	32-bit GCC compiler Range: 0 to 65,535
	32-bit GCC compiler Format Specifier: %hu
*/
//		unsigned int 
/*
	32-bit GCC compiler Memory (bytes): 4
	32-bit GCC compiler Range: 0 to 4,294,967,295
	32-bit GCC compiler Format Specifier: %u
*/
//		long int 
/*
	32-bit GCC compiler Memory (bytes): 4 
	32-bit GCC compiler Range: -2,147,483,648 to 2,147,483,647
	32-bit GCC compiler Format Specifier: %ld
*/
//		unsigned long int
/*
	32-bit GCC compiler Memory (bytes): 4
	32-bit GCC compiler Range: 0 to 4,294,967,295
	32-bit GCC compiler Format Specifier: %lu
*/
//		long long int  
/*
	32-bit GCC compiler Memory (bytes): 8
	32-bit GCC compiler Range: -(2^63) to (2^63)-1
	32-bit GCC compiler Format Specifier: %lld
*/
//		unsigned long long int
/*
	32-bit GCC compiler Memory (bytes): 8
	32-bit GCC compiler Range: 0 to 18,446,744,073,709,551,615
	32-bit GCC compiler Format Specifier: %llu
*/
//		signed char
/*
	32-bit GCC compiler Memory (bytes): 1
	32-bit GCC compiler Range: -128 to 127
	32-bit GCC compiler Format Specifier: %c
*/
//		unsigned char 
/*
	32-bit GCC compiler Memory (bytes): 1
	32-bit GCC compiler Range: 0 to 255
	32-bit GCC compiler Format Specifier: %c
*/
//		long double
/*
	32-bit GCC compiler Memory (bytes): 16
	32-bit GCC compiler Range: 3.4E-4932 to 1.1E+4932
	32-bit GCC compiler Format Specifier: %Lf
*/ 
//	ARRAYS

/*
	https://www.geeksforgeeks.org/c-arrays/
*/

//		C Array Declaration

//			data_type array_name [size];

// 			data_type array_name [size1] [size2]...[sizeN];

//		C Array Initialization

//		C Array Initialization with Declaration

// 			data_type array_name [size] = {value1, value2, ... valueN};

//	DATA STRUCTURES

//	PROGRAM STRUCTURE
//		Driver Code

int main()
{
	return 0;
}
