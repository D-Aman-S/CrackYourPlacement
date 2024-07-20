# SortColors
First I just tried a Two Pass Solution, and filling the array in the next pass after counting 0,1,2.
But this solution could be achieved in one pass
we can initialize 3 pointers lo=0,mid=0,hi=n-1
arr[0] to arr[lo – 1]: This part will have all the zeros.
arr[lo] to arr[mid – 1]: This part will have all the ones.
arr[hi + 1] to arr[N – 1]: This part will have all the twos.
<br/>
Here mid will be the deciding factor, it will keep collecting all the zeroes and put it before lo and when it encounters 1 it simply moves ahead, whenever it encounters 2 it keeps on swapping until all the twos are at the end between hi + 1 and n