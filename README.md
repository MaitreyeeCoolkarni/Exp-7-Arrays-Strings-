# Exp-7-Arrays-Strings-

## AIM:
To study arrays and strings

## Apparatus:
VS code/Programiz

## Theory:

## Arrays

In computer science, arrays are a fundamental data structure used to store a fixed-size, sequential collection of elements of the same type. Since you previously asked about strings in C++, I’ll focus on the theory of arrays in the context of C++ (and general computer science concepts where applicable), covering their definition, properties, operations, and considerations. I’ll keep it concise, structured, and relevant, assuming you want a theoretical overview with some C++-specific insights.

Key Characteristics

1)Fixed Size: The size of an array is determined at declaration and cannot be changed during runtime (in standard C++ arrays).

2)Homogeneous: All elements must be of the same data type (e.g., all int, all float, etc.).

3)Contiguous Memory: Elements are stored sequentially, enabling fast access via index.

4)Index-Based Access: Elements are accessed using their index (e.g., arr[0] for the first element).

5)Static vs Dynamic:

6)Static Arrays: Declared with a fixed size at compile-time (e.g., int arr[5];).

7)Dynamic Arrays: Allocated at runtime using new and deallocated using delete (e.g., int* arr = new int[5];).

8)Elements are accessed using the index: arr[i].

9)Modification: Assign new values using the index (e.g., arr[2] = 50;).

## Limitations:

1)Fixed size (static arrays cannot grow or shrink).

2)No built-in bounds checking, risking undefined behavior.

3)Insertion/deletion is inefficient (requires shifting elements).

## Strings

In C++, the std::string class is a part of the Standard Library and provides a convenient way to work with strings of characters. Unlike C-style strings (null-terminated character arrays), std::string is a dynamic, object-oriented string type that simplifies string manipulation, memory management, and safety. Below is a concise overview of strings in C++, focusing on std::string, its key features, common operations, and practical examples.

Key Features of std::string

1)Defined in: <string> header.

2)Dynamic Size: Automatically resizes to accommodate content, unlike fixed-size C-style strings.

3)Memory Management: Handles allocation and deallocation internally, reducing risks of memory leaks or buffer overflows.

4)Rich Functionality: Provides methods for concatenation, substring extraction, searching, comparison, and more.

5)Interoperability: Works seamlessly with C-style strings when needed (e.g., via .c_str()).

## ALGORITHM:

## Program 1

1.Declare an integer array arr of size 5.

2.For i from 0 to 4:

3.Prompt user for a number and store it in arr[i].

4.For i from 0 to 4:

5.Print arr[i] with a newline.

6.End.

## Program 2:

1)Declare an integer array arr of size 5, initialized with {10, 20, 30, 40, 50}.

2)Declare an integer variable key.

3)Prompt user to enter a value for key and store it.

4)For i from 0 to 4:

5)If key equals arr[i], print "Key is at location i".

6)End.

## Program 3:

Declare an integer array arr of size 5, initialized with {10, 20, 30, 40, 50}.

For i from 0 to 4:

Print arr[4-i] with a newline.

End.

## Program 4:

1)Declare an integer array arr of size 5, initialized with {10, 20, 30, 40, 50}.

2)Declare integer variables sum (initialized to 0) and average.

3)For i from 0 to 4:

4)Add arr[i] to sum.

5)Calculate average as sum divided by 5.

6)Print sum with label "This is the sum:".

7)Print average with label "This is average:".

## Program 5

1)Declare an integer array arr of size 5, initialized with {100, 20, 60, 40, 50}.

2)Initialize min and max with arr[0].

3)For i from 0 to 4:

4)If arr[i] is less than min, update min to arr[i].

5)If arr[i] is greater than max, update max to arr[i].

6)Print min with label "The minimum number is:".

7)Print max with label "The maximum number is:"











