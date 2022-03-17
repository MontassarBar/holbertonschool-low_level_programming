#!/usr/bin/python3
'''island_perimeter'''


def island_perimeter(grid):
    ''' returns the perimeter of the island described in grid'''
    n = 0
    for x in range(0, len(grid) - 1):
        for y in range(0, len(grid[x]) - 1):
            if x != 0:
                if grid[x][y] == 1 and grid[x - 1][y] != 1 and grid[
                        x][y - 1] != 1 and grid[x][y + 1] != 1:
                    n += 3
                elif grid[x][y] == 1 and grid[x - 1][y] != 1 and grid[x + 1][
                        y] != 1 and (grid[
                            x][y - 1] != 1 or grid[x][y + 1] != 1):
                    n += 3
                elif grid[x][y] == 1 and grid[x + 1][y] != 1 and grid[
                        x][y - 1] != 1 and grid[x][y + 1] != 1:
                    n += 3
                elif grid[x][y] == 1:
                    n += 2
            else:
                if grid[x][y] == 1 and grid[x][y - 1] != 1 and grid[
                        x][y + 1] != 1:
                    n += 3
                elif grid[x][y] == 1 and grid[x][y - 1] == 1 or grid[
                        x][y + 1] == 1:
                    n += 2
    return n
