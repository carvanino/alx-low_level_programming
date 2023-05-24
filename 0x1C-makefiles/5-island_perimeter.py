#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Checks if a grid has an island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row_idx, row in enumerate(grid):
        for col_idx, col in enumerate(row):
            if col == 1:
                perimeter += 4

                # If we are not on the first row and the element directly above
                # the current element is 1
                if row_idx > 0 and grid[row_idx - 1][col_idx] == 1:
                    perimeter -= 1

                # Checks downs and makes sure row_idx is not out of range
                if row_idx < (rows - 1) and grid[row_idx + 1][col_idx] == 1:
                    perimeter -= 1

                # Checks left and makes sure col_idx is positive
                if col_idx > 0 and row[col_idx - 1] == 1:
                    perimeter -= 1

                # Checks right and makes sure col_idx is not out of range
                if col_idx < (cols - 1) and row[col_idx + 1] == 1:
                    perimeter -= 1
    return perimeter
