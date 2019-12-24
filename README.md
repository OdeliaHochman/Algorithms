# Algorithms

task 2- advanced programming course

Algorithms description:

1. Median
p = median (b, e, n)
The algorithm receives an iterator b to the beginning of the container and an iterator e to the end of the container and a third parameter n that specifies the number of organs.
The algorithm finds the medians of all n organs and puts them at the beginning of the container.
If the container is empty or the value of n is 1 or the number of organs does not completely divide by n, the algorithm will not calculate the medians and the returned value will be the iterator e.
Otherwise, the algorithm will calculate the medians and the returned value will be an iterator for the end of one (after the medians).

2. Transpose
 P = Transpose(b,e)
The algorithm receives an iterator b to the beginning of the container and an iterator e to the end of the container.
The algorithm switches between two adjacent organs, between organ 0 and organ 1, between organ 2 and organ 3, and so on.
If the number of organs is not even, the last one will not be replaced.
The algorithm returns the iterator e if the number of organs is even, otherwise returns e - 1.

3. Transformations
p = Transformations(b, e, f)
The algorithm receives an iterator b for the beginning of a container, an iterator for the end of the container and a third function parameter.
The algorithm runs the function on any two adjacent organs: organ 0 and organ 1, organ 2 and organ 3, and so on, and puts the results at the beginning of the container.
If the container is empty or the number of organs is not even, the algorithm will not calculate the function and the returned value will be the iterator e.
Otherwise, the returned value will be an iterator for the (one after) results.



