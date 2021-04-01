# Lab-Exercise-9
Intermediate Computer Programming lab 9

Problem Description:
Consider a 2-Dimensional integer array A[101][101] of dimensions 101 × 101. 2000 indices i, j are
generated randomly so that each i and j is uniformly distributed in the interval [0, 100]. Initially
the elements A[i][j] are assigned undefined values of your choice. For each pair of random indices
i, j generated, if the corresponding element A[i][j] is undefined, a count of 1 is assigned otherwise
the element count is increased by 1. After 2000 generated pairs of indices i, j some entries in the
array will be undefined, some will have positive values of count ≥ 1 as shown in the Figure 1.
Given an array populated as above, and a rectangular covering region, as shown in blue, the
problem is to report the coordinates or indices i, j of the entries with positive counts and the values
of the respective counts. The rectangular bounding box is specified by giving the coordinates of the
lower left and the upper right diagonal corners. In the illustrative Figure 1, these will be h2, 3, 5, 5i.
The search in the bounding box should yield the result
2, 5; 1
3, 4; 4
5, 5; 1

Tasks to be done
A) Write a main program that declares an array A[101][101] and initialises it according to your
chosen.
B) Write a function
populateArray(..., int N);
that takes a parameter N, indicating how random pairs of indices hi, j,i times it should generate,
to update the entries the array A[][].
C) Write a function
searchValidEntries(int XL, int YL, int XH, int YH, ...);
that takes the values of the coordinates of the corners of the bounding box and reports the
indices and counts of the entries in A[][] with positive count values as illustrated in the example.
D) From the main program read the values of 5 bounding boxes, one line at a time, and report the
indices and counts of the entries in A[][] that lie withing the bounding boxes. The bounding
boxes to try you algorithm on are:
80, 1, 100, 10
10, 20, 40, 79
1, 90, 100, 100
40, 30, 70, 60
50, 50, 70, 70
The Deliverable
• Submit your computer codes for marking to your GitHub repository. Use the repository of
only one member of your group.
• Provide a short description of your solution to the problem and describe the high level logic
of your functions with a pseudocode.
• For each input of the bounding box list the response as required
