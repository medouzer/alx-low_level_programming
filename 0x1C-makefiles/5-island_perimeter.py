#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """island_perimeter finction"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if (i > 0):
                    if (grid[i - 1][j] == 0):
                        perimeter += 1
                else:
                    perimeter += 1
                if (j > 0):
                    if (grid[i][j - 1] == 0):
                        perimeter += 1
                else:
                    perimeter += 1
                if (i < len(grid) - 1):
                    if (grid[i + 1][j] == 0):
                        perimeter += 1
                else:
                    perimeter += 1
                if (j < len(grid[i]) - 1):
                    if (grid[i][j + 1] == 0):
                        perimeter += 1
                else:
                    perimeter += 1
    return perimeter
