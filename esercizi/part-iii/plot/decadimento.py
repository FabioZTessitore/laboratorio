import math
import matplotlib.pyplot as plt

lambdas = [25., 5., 1./5., 1./25.]
colors = ['r', 'b', 'g', 'm']

t_min = 0.
t_max = 4.
dt = .05

t = []
current_t = t_min
while current_t < t_max+dt:
    t.append(current_t)
    current_t += dt

n = []
for k, l in enumerate(lambdas):
    n.append([])
    for current_t in t:
        n[k].append(math.exp(-l * current_t))

plt.xlabel('t')
plt.title('Decadimento radioattivo')
plt.axis([t_min, t_max, 0, 1])
for k, l in enumerate(lambdas):
    plt.plot(t, n[k], colors[k])
plt.show()