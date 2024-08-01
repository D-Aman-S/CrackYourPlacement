# MajorityElement
Solving this using sorting, brute force and hashmap is easy but achieving O(n) time and O(1)
space 

So the solution would be achieved using Boyer–Moore majority vote algorithm, its the first time i have heard about and hence i am applying it.
This algorithms assumes an element to be our answer and begins checking the array, if it find similar element it updates c and if not it decrements c, if c becomes zero then it means that the subsection doesnt conatyin any majority element and hence assumes another element. At the end of loop it finds the majorty element if it exists.