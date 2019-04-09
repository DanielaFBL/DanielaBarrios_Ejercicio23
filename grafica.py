import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ montec.cpp -o montec.x")
a = os.system("./montec.x > montec.dat")
data = np.loadtxt("montec.dat")
print(data[:,0], data[:,1])
