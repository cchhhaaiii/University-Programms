import matplotlib.pyplot as plt
import numpy as np

categories = np.array(["m", "s", "f", "r"])
sizes = np.array([10, 23, 18, 37])
colors = ["pink", "skyblue", "yellow", "lightgreen"]

plt.pie(sizes, labels=categories ,
        autopct='%1.1f%%',
          colors=colors, 
            explode=[0.0, 0.0, 0.1, 0.0])
#                startangle=90)
plt.title("Pie Chart")
plt.show()