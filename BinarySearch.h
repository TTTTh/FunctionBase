
/*
*   完成了整形数组的二分查找
*   number 被查找的元素
*   a 数组指针
*   end 数组长度
*   2016-04-11 21:27:39
*/

int BinarySearch(int number, int *a,int end)
{
  int mid, start = 0;
  end--;

  while (start <= end) {
    mid = (start + end) / 2;
    if (a[mid] < number)
      start = mid + 1;
    else if (a[mid] > number)
      end = mid - 1;
    else
      return mid;
  }
  return -1;
}

