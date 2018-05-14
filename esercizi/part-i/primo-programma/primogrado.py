# primogrado.py

# risolve equazioni di primo grado
# nella forma Ax + B = 0, con A e B interi

print("Risolve equazioni di primo grado")
print("nella forma Ax + B = 0\n")

A = input('A: ')
A = int(A)
B = input('B: ')
B = int(B)

if A==0 and B==0:
    print("L'equazione 0 = 0 ammette infinite soluzioni")

elif A==0:
    print("L'equazione", B, "= 0 non ammette soluzioni")

else:
    x = -B / A
    print("L'equazione ammette soluzione:", x)
