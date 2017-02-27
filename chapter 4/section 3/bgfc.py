def BRGC(n):
    if n == 1:
        return ["0", "1"]
    else:
        l1 = BRGC(n - 1)
        l2 = l1[:]
        for i in range(0, len(l2)):
            l2[i] = l2[i][::-1]

        for i in range(0, len(l1)):
            l1[i] = "0" + l1[i]

        for i in range(0, len(l2)):
            l2[i] = "1" + l2[i]

        l1.extend(l2)

    return l1

print(BRGC(4))