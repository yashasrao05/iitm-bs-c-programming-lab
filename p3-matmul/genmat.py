import numpy as np
from numpy import random
import sys

M = 10


A = random.random((M, M))
np.savetxt("a.txt", A, fmt='%6.4g')

B = random.random((M, M))
np.savetxt("b.txt", B, fmt='%6.4g')

C = A @ B
np.savetxt("c.txt", C, fmt='%8.4g')
