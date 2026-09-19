import matplotlib.pyplot as plt

x1 = [1, 2, 3, 4, 5]
y1 = [60, 70, 80, 90, 100]

x2 = [1, 2, 3, 4, 5]
y2 = [50, 60, 70, 80, 90]

plt.scatter(x1, y1, color='skyblue', s=200, label='Class A')
plt.scatter(x2, y2, color='pink', s=200, label='Class B')

plt.xlabel('Hours Studied')
plt.ylabel('Test Scores')
plt.title('Student Performance')
plt.legend()


plt.show()