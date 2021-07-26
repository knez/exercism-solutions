class Matrix:
    def __init__(self, matrix_string):
        ''' Parse matrix '''
        rows = matrix_string.split('\n')
        self.matrix = [
            [int(n) for n in row.split()] for row in rows
        ]

    def row(self, index):
        return self.matrix[index - 1]

    def column(self, index):
        transposed = list(map(list, zip(*self.matrix)))
        return transposed[index - 1]
