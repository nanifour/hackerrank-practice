#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())

    i = 1

    while 1 <= i <= 10:
        result = i * n
        print(n, "x", i, "=", result)
        #i = i + 1
        i += 1


