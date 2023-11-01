
//{0,1,2,3,4,5,6,7,8,9,10};

int binary_search(int *data, int len, int key)
{
   printf("Binary Search \n");
   if((len < 1) || (data[0]>key) || (data[len-1] < key))
    return -1;

   int l,h, mid;
   l = 0; h = len;
 //  mid = (l+h)/2;
   while(l<=h)
   {
       mid = (l+h)/2;
       // printf("mid %d \n",data[mid]);
       if(data[mid] == key)
       {
           return mid;

       }else if(data[mid] < key)
       {
           l = mid+1;
       }else {
         h = mid-1;
       }

       printf("%d  %d %d \n", l,mid, h);
   }

    return(-1);
}
