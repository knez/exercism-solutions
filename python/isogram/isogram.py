def is_isogram(string):
    stripped = list(filter(str.isalpha, string.lower()))
    return len(stripped) == len(set(stripped))
