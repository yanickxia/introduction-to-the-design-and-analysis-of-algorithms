def f(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    return f(n-2) + f(n-1)


n_array = []
n_array.append(0)
n_array.append(1)
def fib(n):
    i = 2
    while i < n:
        n_array[i] = n_array[i-1]+n_array[i-2]
        i++