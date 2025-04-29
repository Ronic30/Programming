# import numpy as np
# sales_data = np.array([
# [120, 135, 150, 160, 145, 155, 165, 170, 160, 158, 150, 140], #Product A
# [80, 90, 85, 88, 92, 95, 100, 105, 98, 94, 90, 88], # ProductB
# [200, 210, 215, 220, 230, 240, 250, 260, 255, 250, 245, 240], #Product C
# [60, 65, 70, 72, 68, 66, 70, 75, 78, 76, 74, 72], # ProductD
# [150, 155, 160, 165, 170, 180, 185, 190, 195, 188, 180, 175], #Product E
# ])

# # print(sales_data[:, 0])
# # print(sales_data[1, 0])
# # print(sales_data[1, 0:6])

# # print(sales_data.sum(axis = 1))

# high_m2 = np.argmax(sales_data[1])
# print(high_m2)cmd

import matplotlib.pyplot as plt

x = [0, 2, 4, 6, 8]
y = [0, 4, 16, 36, 64]

fig, ax = plt.subplots()  
ax.plot(x, y, marker='o', label="Data Points")

ax.set_title("Basic Components of Matplotlib Figure")
ax.set_xlabel("X-Axis") 
ax.set_ylabel("Y-Axis")  


plt.show()
