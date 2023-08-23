#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    width = len(grid[0])
    borders = 0
    size = 0
    height = len(grid)

    for m in range(height):
        for n in range(width):
            if grid[m][n] == 1:
                size += 1
                if n > 0 and grid[m][n - 1] == 1:
                    borders += 1
                if m > 0 and grid[m - 1][n] == 1:
                    borders += 1

    return (size * 4 - borders * 2)
