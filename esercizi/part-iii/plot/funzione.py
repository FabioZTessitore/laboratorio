import math
import matplotlib.pyplot as plt

x_min = 0.
x_max = 1.
dx = .05

x = []
y = []
current_x = x_min
while current_x < x_max+dx:
    x.append(current_x)
    y.append(math.exp(current_x))
    current_x += dx
print('x', x)
print('y', y)

plt.plot(x, y)

plt.xlabel('x')
plt.title('y = exp(x)')

plt.axis([x_min, x_max, 0, 3])

plt.show()