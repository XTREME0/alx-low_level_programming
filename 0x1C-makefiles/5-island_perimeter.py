#!/usr/bin/python3
""" island_perimeter function """


def island_perimeter(g):
    """ island perimeter """

    wdth = len(g[0])
    ht = len(g)
    size = 0
    e = 0

    for i in range(ht):
        for j in range(wdth):
            if g[i][j] == 1:
                size += 1
                if (i > 0 and g[i - 1][j] == 1):
                    e += 1
                if (j > 0 and g[i][j - 1] == 1):
                    e += 1
    return size * 4 - e * 2
