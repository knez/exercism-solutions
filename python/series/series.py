import re

def slices(series, length):
    if length < 1 or length > len(series):
        raise ValueError('No can do')
    pattern = '(?=(' + r'\w' * length + '))'
    return re.findall(pattern, series)
