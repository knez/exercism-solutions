class Matrix:
    def __init__(self, matrix_string):
        """Parse matrix."""
        self.matrix = [[int(n) for n in row.split()] 
                        for row in matrix_string.splitlines()]

    def row(self, index):
        return self.matrix[index - 1]

    def column(self, index):
        return [row[index - 1] for row in self.matrix]
