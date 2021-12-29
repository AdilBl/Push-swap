# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    script.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelache <abelache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 11:35:36 by arangoni          #+#    #+#              #
#    Updated: 2021/12/09 15:39:45 by abelache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import random
import math
import subprocess
from typing import Text
import matplotlib.pyplot as plt
import numpy as np
from ctypes import *
from subprocess import PIPE, call

v = []
for i in range(0, 50):
	v.append([])
	for j in range(0, 5):
		l = [i + 2 for i in range(0, i)]
		random.shuffle(l)
		s = ["./push_swap", ]
		s.extend([str(i) for i in l])
		v[i].append(len(subprocess.check_output(s, text=1).split('\n')))
	v[i] = sum(v[i]) / len(v[i])
	print(v[i], i)

l = [i for i in range(2, 50)]
print(v)
print(l)
fig, ax = plt.subplots()
ax.plot(l, v)

ax.set(xlabel='Taille (n)', ylabel='Complexité (moyenne / 100)',
       title='Complexite pour une taille variant de 0 à 50')
ax.grid()

fig.savefig("test.png")
plt.show()