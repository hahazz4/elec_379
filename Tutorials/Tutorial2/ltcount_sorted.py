from array import array
N = 6
x = array('i', [7, 5, 3, 1, 7, 3])
cnt = array('i', [0] * N)

def LTCOUNTSORTED (a, lt_count, n):
        count = 0

        for i in range (0,n):
            if (i == 0 or a[i] != last_value):
                last_count = count
                last_value = a[i]
            lt_count[i] = last_count
            count = count + 1

def main():
    LTCOUNTSORTED (x, cnt, N)

    for i in range (0, N):
        print("%d %d" % (x[i], cnt[i]))

#start up script
if (__name__ == "__main__"):
    main()

#--------------------------------
#most neg int code:
# max = <most negative integer>
# for i = 0 to n - 1 do
#     if(a[i] > max) then
#         max = a[i]
#     end if
# end for

# max = a[0] #start at 1 instead...
# for i = 1 to n - 1 do
#     if(a[i] > max) then
#         max = a[i]
#     end if
# end for