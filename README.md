# KR-C-Learning-Log
Documenting my journey into Bare Metal programming and K&R C exercises. Based in Pune, India.

**Exercise 2-2**: Write a loop equivalent to the for loopof getline program without using && or ||. 

**Exercise 2-3**: Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.

**Exercise 2-6**. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.

**Exercise 2-7**. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. 

**Exercise 2-8**. Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions.

**Exercise 2-9**.In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
in x. Use this observation to write a faster version of bitcount. 

**Exercise 2-10**. Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.

**Exercise 3-1**. Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop

**Exercise 3-2**. Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a 
function for the other direction as well, converting escape sequences into the real characters. 
