# secgrado.py

# Risolve equazioni di secondo grado nella
# forma ax^2+bx+c=0 con a, b e c interi
# Calcola anche soluzioni complesse!

import math

print("Risolve equazioni di secondo grado")
print("nella forma ax^2 + bx + c = 0")

a = input('a: ')
a = int(a)
b = input('b: ')
b = int(b)
c = input('c: ')
c = int(c)

if a==0 and b==0 and c==0:
    print("L'equazione 0 = 0 ammette infinite soluzioni")

elif a==0 and b==0:
    print("L'equazione", c, "= 0 non ammette soluzioni")

elif a==0:
    print("L'equazione si riduce al primo grado")
    print("Soluzione:", -c/b)

else:
    delta = b * b - 4 * a * c
    if delta < 0:
        print("Delta < 0. L'equazione ammette due soluzioni complesse coniugate")
        rad_delta = math.sqrt(-delta)
        re = -b / (2.0 * a)
        imm = abs(rad_delta / (2.0 * a))
        print("x1 =", re, "-i", imm)
        print("x2 =", re, "+i", imm)
    elif delta == 0:
        print("Delta = 0. L'equazione ammette due soluzioni coincidenti")
        print("x1 = x2 =", -b / (2.0 * a))
    else:
        print("L'equazione ammette due soluzioni distinte")
        rad_delta = math.sqrt(delta)
        print("x1 =", (-b - rad_delta) / (2.0 * a))
        print("x2 =", (-b + rad_delta) / (2.0 * a))
