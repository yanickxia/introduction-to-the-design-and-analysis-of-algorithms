def find_mobile(direction_array, n_array):
    bigger, bigger_index = -1, 0
    for i in range(0, len(n_array)):
        if (direction_array[i] and i < len(n_array) - 1 and n_array[i] > n_array[i + 1]) \
                or (not direction_array[i] and i > 0 and n_array[i] > n_array[i - 1]):
            if n_array[i] > bigger:
                bigger = n_array[i]
                bigger_index = i

    if bigger > -1:
        return bigger_index
    return -1


def reversal_k(k, direction_array, n_array):
    for direction_i in range(0, len(direction_array)):
        if n_array[direction_i] > k:
            direction_array[direction_i] = not direction_array[direction_i]
    return direction_array


def to_string(n_array):
    s = ""
    for n in n_array:
        s += str(n)
    return s


def johnson_trotter(n):
    # true is > , false is <
    direction_array = []
    n_array = []
    rs_array = []

    # init array
    for i in range(1, n + 1):
        direction_array.append(False)
        n_array.append(i)

    rs_array.append(to_string(n_array))
    mobile_index = find_mobile(direction_array, n_array)
    while mobile_index != -1:
        temp, k = 0, n_array[mobile_index]
        if direction_array[mobile_index]:

            temp = n_array[mobile_index + 1]
            n_array[mobile_index + 1] = n_array[mobile_index]
            n_array[mobile_index] = temp

            temp = direction_array[mobile_index + 1]
            direction_array[mobile_index + 1] = direction_array[mobile_index]
            direction_array[mobile_index] = temp
        else:
            temp = n_array[mobile_index - 1]
            n_array[mobile_index - 1] = n_array[mobile_index]
            n_array[mobile_index] = temp

            temp = direction_array[mobile_index - 1]
            direction_array[mobile_index - 1] = direction_array[mobile_index]
            direction_array[mobile_index] = temp

        direction_array = reversal_k(k, direction_array, n_array)
        rs_array.append(to_string(n_array))
        mobile_index = find_mobile(direction_array, n_array)

    return rs_array


print(johnson_trotter(3))
