# Exp-7-Arrays-Strings-

## AIM:
To study arrays and strings

## Apparatus:
VS code/Programiz

## Theory:

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

## ALGORITHM:

Program 1

1.Declare an integer array arr of size 5.
2.For i from 0 to 4:
3.Prompt user for a number and store it in arr[i].
4.For i from 0 to 4:
5.Print arr[i] with a newline.
6.End.

Program 2:

1)Declare an integer array arr of size 5, initialized with {10, 20, 30, 40, 50}.
2)Declare an integer variable key.
3)Prompt user to enter a value for key and store it.
4)For i from 0 to 4:
5)If key equals arr[i], print "Key is at location i".
6)End.

Program 3:

Declare an integer array arr of size 5, initialized with {10, 20, 30, 40, 50}.
For i from 0 to 4:
Print arr[4-i] with a newline.
End.

Program 4:










