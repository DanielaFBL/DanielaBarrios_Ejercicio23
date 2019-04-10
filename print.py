import os
import numpy as np


a = os.system("g++ montec.cpp -o montec.x")
a = os.system("./montec.x > montec.dat")
data = np.loadtxt("montec.dat")
print(data[:,0], data[:,1])
