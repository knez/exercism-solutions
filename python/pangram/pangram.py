def is_pangram(sentence):
    filtered = filter(str.isalpha, sentence.lower())
    return len(set(filtered)) == 26
