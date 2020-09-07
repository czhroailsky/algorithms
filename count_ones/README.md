Algorithm to count the number of bytes set to one in the binary representation of an integer.

Complexity: <img src="https://render.githubusercontent.com/render/math?math=O(s)">

Where *s* is the number of bytes set to 1.

This approach is based on solve the equation <img src="https://render.githubusercontent.com/render/math?math=y=x\bigwedge(\overline{x-1})">

This equation has to be solved until of the bytes in x are zero, removing the bit set to one using the operation <img src="https://render.githubusercontent.com/render/math?math=x \bigotimes y">
