# primogrado.py

# risolve equazioni di primo grado
# nella forma ax + b = 0, con a e b interi

print("Risolve equazioni di primo grado")
print("nella forma ax + b = 0\n")

a = input('a: ')
a = int(a)
b = input('b: ')
b = int(b)

if a==0 and b==0:
    print("L'equazione 0 = 0 ammette infinite soluzioni")

elif a==0:
    print("L'equazione", b, "= 0 non ammette soluzioni")

else:
    x = -b / a
    print("L'equazione ammette soluzione:", x)
