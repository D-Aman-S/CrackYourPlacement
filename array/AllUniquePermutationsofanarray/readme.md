# AllUniquePermutationsofanarray
At first glance i got afraid of the problem, but after 2 days i found my courage back. The problem nature seems like recursion 
because at each point you have to fix one number and go on fixing the rest of the number , for ex: 1 2 3, we will fix 1  then proceed to fix 2 or 3 in second step and remaining in the third step, and then proceed with fixing 2 and 3 in the first step and repeat the procedure.

To resolve the duplicates permutation, we will only fix one type of number at each index, fopr eg: 2 2 3 4, at first position we can fix 2  twice but that would generate repetitive solutions, so at first position we will only fix 2 once, this can be easily done by using a map or set at each index or at each recursion stage.

Further we will also make note of which indexes we have already picked so that we dont pick them again, using a boolean array visited