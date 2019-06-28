# C - Sorting algorithms & Big O

![N|Solid](https://www.geeksforgeeks.org/wp-content/uploads/mypic.png)
[Blog](https://medium.com/@ssbothwell/sorting-algorithms-and-big-o-analysis-332ce7b8e3a1)

A sorting algorithm is one that takes an unordered list and returns it ordered. Various orderings can be used but for this article we will focus on numeric ordering, ie 5,3,4,1,2 => 1,2,3,4,5. I’m going to present 3 different sorting algorithms, walk through how they work and compare their efficiency using Big-O notation — which I will briefly explain. All my examples will be in Python.

# Big O
  The exact computational complexity of an algorithm will always vary with the subtleties of its input—for example feeding a sorted list into an efficient sorting algorithm should take a lot less work to process then feeding in an unsorted list of the same size. With Big-whatever notation we make generalized statements about an algorithms performance like ‘this algorithm is at least this complex or this algorithm is at most that complex.’ To represent these different claims we use Big-O, Big-Omega, or Big-Theta. Big-O looks at the maximum number of operations that will be required, Big-Omega looks at the minimum, and Big-Theta looks at both boundaries—or in more technical terms Big-Theta shows how tightly bound the algorithm is.
  
  For example, imagine we had a function that loops through an array, checking if each element in the array matches a value and then returning the number of elements matching that value after the loop. The number of operations required to complete the for loop will increase linearly with the size of the input array (O(n)), and printing the sum will only needs to happen once (O(1)). Assuming an array with a size n, the loop is size n operations whereas the sum is always 1 operation. If we were assuming an input of n=1 then the sum operation would be very substantial. However, in Big-O we are assuming extremely large inputs approaching infinity. In that situation the sum is inconsequential in comparison to the n-sized loop and can be safely ignored.

### O(1)

    def func(arr):
       return arr[0]
       
This function returns the first element of the input array and will always take a single operation to complete, regardless of the size of the input.     

### O(n)
    def (arr, val):
      for el in arr:
        if el == val:
           print el
    return


The for loop in this function will always take one operation per element in the input array. O(n) functions like this have a linear increase in complexity.

### O(log(n))
    def nlog(n):
        if n == 1:
            return
        else:
            nlog(n/2)

This function, while entirely useless, is a really simple demonstration of O(log(n)). This recursive function calls itself repeatedly on the input value divided by two until n = 1. This repeated halving of the input with each iteration is indicative of O(log(n)) functions. Initially their difficult increases at a fast pace but then quickly levels off as the input gets larger.

### O(n²)
    def containsDuplicate(arr):
        for i in range(0, len(arr)):
            for j in range(0, len(arr)):
                if i != j:
                    if arr[i] == arr[j]:
                        return true
        return false

The outer for loop has one operation per element in the input array, but every time the outer loop iterates, the inner one will complete a full loop the size of the input array. O(n²) algorithms like this have a complexity equal to the square of the input and are said to be in quadratic time.

### O(2ⁿ)
    def countFibonacci(num):
        if num <= 1:
            return num
        else:
            return countFibonacci(num-2) + countFibonacci(num-1)

This last example is a recursive function that returns the nth Fibonacci number. Without getting into the details, this is a recursive algorithm where the number of additions increases at an exponential rate which results in massive numbers of operations as n increases.
### O(!n)

    void nFacRuntimeFunc(int n) {
        for(int i=0; i<n; i++) {
            nFacRuntimeFunc(n-1);
        }
        

n! and 2^n are both exponential functions - but n! Is much stronger than 2^n. n! Reaches towards infinity much faster.

It’s like the difference between x^2 to x^200 - they are both polynomial functions - but x^200 is much stronger.

In complexity theory - those differences are not much important or meaningful; x^2 and x^200 are both poly(x) functions - they both in the polynomial functions class - like every function in the form of x^k while k is a constant number; And n! and 2^n are both exp(n) - they are both in the exponential functions class - but not poly(n). [every poly(x) is also exp(x) because exp(x) is O(exp(x)) (and poly(x) is O(poly(x))]

# Tasks

 | Task | Description |
 | ---- | ----------- |
 | 0. Bubble sort | Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm |
 | 1. Insertion sort | Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm |
 | 2. Selection sort | Write a function that sorts an array of integers in ascending order using the Selection sort algorithm |
 | 3. Quick sort | Write a function that sorts an array of integers in ascending order using the Quick sort algorithm |

---
