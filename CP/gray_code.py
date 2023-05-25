n = int (input())
a = 0
str = ""
def print_var(k):
    global a
    global n
    global str
    if (a == n):
        print(str)
        str = str[:-1]
        return
    a += 1
    if (k == 0):
        str += "1"
        print_var(k)
        str += "0"
        print_var((k+1)%2)
        str = str[:a-2]
    else:
        str += "0"
        print_var((k+1)%2)
        str += "1"
        print_var(k)
        str = str[:a-2]
    a -= 1

print_var(0)