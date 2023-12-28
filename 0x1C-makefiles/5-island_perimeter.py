#!/usr/bin/python3
"""Calculates the perimeter of an island"""

def island_perimeter(grid): 
  	"""Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
	perimeter=0
	rows=len(grid)
	cols=len(grid[0])

	for row in range(rows):
		for col in range(cols):
			if grid[row][col] == 1:
				perimeter += 4
			if row > 0 and grid[row -1][col] == 1:
				perimeter -= 1
			if row < rows - 1 and grid[row + 1] [col] == 1:
				perimeter -= 1
			if col > 0 and grid [row][col -1] == 1:
				perimeter -= 1
			if col < cols -1 and grid [row] [col + 1] == 1:
				perimeter -=1

	return perimeter