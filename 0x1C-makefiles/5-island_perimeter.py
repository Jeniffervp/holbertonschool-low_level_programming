#!/usr/bin/python3
""" Perimeter of island """


def island_perimeter(grid):
    """ find the perimeter """

    nume = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x < len(grid) - 1 and grid[x + 1][y]:
                    nume += 1
                if x > 0 and grid[x - 1][y]:
                    nume += 1
                if y < len(grid[x]) - 1 and grid[x][y + 1]:
                    nume += 1
                if y > 0 and grid[x][y - 1]:
                    nume += 1
                nume -= 4
    nume = nume * - 1
    return nume
