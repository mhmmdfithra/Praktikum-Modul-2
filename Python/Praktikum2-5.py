import math
B=float(input("B = "))
A=float(input("A = "))
C=math.sqrt(B*B-A*A)
print("Alas = ",round(C),("cm"))
print("Tinggi =",round(A),("cm"))
print("Keliling = ", round(A+B+C),("cm"))
print("Luas = ",round(A*C/2),("cm^2"))