class Matrix:
    def __init__(self, matrix_string):
        """Parse matrix."""
        rows = matrix_string.splitlines()
        self.matrix = [
            [int(n) for n in row.split()] for row in rows
        ]

    def row(self, index):
        return self.matrix[index - 1]

    def column(self, index):
        return [row[index - 1] for row in self.matrix]
