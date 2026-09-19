import matplotlib.pyplot as plt
import numpy as np

brands = np.array(["m", "s", "f", "r"])
values= np.array([10, 23, 18, 37])

plt.bar(brands, values, color="pink", edgecolor="skyblue", linewidth=2)
#plt.barh(brands, values, color="pink", edgecolor="skyblue", linewidth=2)
plt.xlabel("Brands")
plt.ylabel("Values")
plt.title("Bar Chart")
plt.show()
