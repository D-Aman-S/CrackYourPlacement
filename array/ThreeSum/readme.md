# ThreeSum
My first hashmap solution is very inefficient, and it gave me a lot of TLEs , only after i skipped the duplicate entries for the first element it stopped. 
Also in skipping the duplicate entries there's one subtle thing missed
```
            if(i>0 and nums[i]==nums[i-1])continue;
```
if i didn't do i>0, it would keep checking and never stop and fail in case of all zeroes.


Secondly I will now implement a 2 pointer solution.I faced many small difficulties will need to practice again, The only place thats tricky and different from the rest of the solution is that, in the event we found a successful solution, we have  to increment our left pointer until all the duplicate pointers have been ignored
