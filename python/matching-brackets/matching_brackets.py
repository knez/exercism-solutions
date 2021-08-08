def is_paired(input_string):
    stack = []
    opened, closed = '({[', ')}]'
    for c in input_string:
        if c in opened:
            stack.append(c)
        elif c in closed:
            if not stack: return False
            top = stack.pop()
            if top != opened[closed.index(c)]:
                return False
    return not stack
