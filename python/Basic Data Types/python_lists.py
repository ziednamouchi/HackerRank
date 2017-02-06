N = int(input())
List = []
for _ in range(N):
    string = input().split()
    cmd = string[0]
    arguments = string[1:]
    if cmd == "print":
        print(List)
    else:
        cmd += "(" + ",".join(arguments) + ")"
        eval("List." + cmd)
