#!/usr/bin/python3
"""this module defines to get the perimeter of an islor"""


def island_perimeter(grid):
    """function to get the perimwter of an islor described in a grid"""

    perimeter = 0

    """
    h_link reperesent horizontal link or connection i.e rows
    v_link: represent vertical link or connection i.e column
    """
    h_link = len(grid)
    if grid != []:
        v_link = len(grid[0])

    for p in range(h_link):
        for k in range(v_link):
            if grid[p][k] == 1:
                if (p - 1) == -1 or grid[p - 1][k] == 0:
                    perimeter += 1
                if (p + 1) == h_link or grid[p + 1][k] == 0:
                    perimeter += 1

                if (k - 1) == -1 or grid[p][k - 1] == 0:
                    perimeter += 1
                if (k + 1) == v_link or grid[p][k + 1] == 0:
                    perimeter += 1

    return perimeter
