# decadimento.py

# Un elemento radioattivo decade secondo la formula N = N0 * exp(-lambda * t)
# Considerato N0 = 1
# Grafici relativi a quattro elementi con lambda rispettivamente 25, 5, 1/5 e 1/25
# nell'intervallo ti tempo (0, 4)

import math
import matplotlib.pyplot as plt

lambdas = [25., 5., 1./5., 1./25.]
colors = ['r', 'b', 'g', 'm']

t_min = 0.
t_max = 4.

# numero di punti da utilizzare (estremi compresi)
n = 11

# ampiezza dell'intervallo temporale
dt = (t_max - t_min) / (n - 1)

# valori di t
# t_min, t_min+dt, t_min+2dt, ..., t_min+(n-1)dt
t = [(t_min+i*dt) for i in range(n)]

# n[], un grafico per ogni lambda
n = []
for l in lambdas:
    n.append([math.exp(-l * current_t) for current_t in t])

plt.xlabel('t')
plt.title('Decadimento radioattivo')
plt.axis([t_min, t_max, 0, 1])
for k, l in enumerate(lambdas):
    plt.plot(t, n[k], colors[k]+'o-', label=lambdas[k])
    plt.legend()
plt.show()