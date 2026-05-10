# KR-C-Learning-Log
Documenting my journey into Bare Metal programming and K&amp;R C exercises. Based in Pune, India.

**Exercise 2-6**. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.

**Exercise 2-7**. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. 

**Exercise 2-8**. Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions.
=>While solving it I learned several low-level C concepts
1. Bit rotation is different from bit shifting
-Right shift (>>) discards bits that fall off.
-Rotation preserves those bits by wrapping them back to the other side.
-So rotation = shift + wrap-around.
2. Importance of bit-width (8-bit vs 32-bit)
-I initially assumed an 8-bit representation, which gave incorrect or misleading results.
-In C, integers are typically 32-bit, so bit operations must respect sizeof(type) * CHAR_BIT.
-The same value behaves differently depending on interpretation:
 8-bit view → 253 → 127 after rotation
 32-bit view → 253 → 1073741887 after rotation
