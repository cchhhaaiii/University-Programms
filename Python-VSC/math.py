from sympy import *
A = Matrix([[3, -1], [1, 2]])
B = Matrix([[5], [4]])
ans = (A**-1) * B
print(ans)