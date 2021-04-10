def binarySearch(arr, element):
    lo = 0
    hi = len(arr)-1
    while(lo < hi):
        mid = int((lo+hi-1)/2)
        if(arr[mid] == element):
            return mid
        elif(arr[mid] < element):
            lo = mid+1
        elif(arr[mid] > element):
            hi = mid-1
    return -1


def main():
    arr = [1, 3, 4, 5]
    element = 2
    print(binarySearch(arr, element))


if __name__ == "__main__":
    main()
