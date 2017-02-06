def mutate_string(string, position, character):
    lstring = list(string)
    lstring[position] = character
    string = "".join(lstring)
    return string
if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
