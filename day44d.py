import numpy as np
print("angle | 0 | π/6 | π/4 | π/3 | π/2")
print("---------------------------------")
angles = [0, np.pi/6, np.pi/4, np.pi/3, np.pi/2]
cos_values = [np.cos(a) for a in angles]
print("cos(x)| {:.4f} | {:.4f} | {:.4f} | {:.4f} | {:.4f}".format(*cos_values))
# Outputs table of cos values
