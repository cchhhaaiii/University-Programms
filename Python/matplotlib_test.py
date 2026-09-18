import matplotlib.pyplot as plt

x = ["m", "s", "f", "r"]
y1 = [10, 23, 18, 37]
y2 = [14, 21, 15, 34]
linestyle =  dict (marker='.', 
                 markersize=30, 
                   markerfacecolor="pink",
                     markeredgecolor="purple", 
                        linestyle="dotted",
                            linewidth=2,
                                color="green")
plt.plot(x, y1, **linestyle)
plt.plot(x, y2, **linestyle)
plt.show()