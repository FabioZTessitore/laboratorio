# plot.py

# grafico di una funzione con matplotlib

import math
import matplotlib.pyplot as plt

x_min = 0.
x_max = 1.

# numero di punti da utilizzare (estremi compresi)
n = 11

# ampiezza dell'intervallo
dx = (x_max - x_min) / (n - 1)

# valori di x
# x_min, x_min+dx, x_min+2dx, ..., x_min+(n-1)dx
x = [(x_min+i*dx) for i in range(n)]
# y = exp(x)
y = [math.exp(current_x) for current_x in x]

# stampa per debug
if n < 20:
    print('x', x)
    print('y', y)

# grafico in blu, con cerchietti per i punti e linea
plt.plot(x, y, 'bo-')

plt.xlabel('x')
plt.title('y = exp(x)')

plt.axis([x_min, x_max, 0, 3])

plt.show()