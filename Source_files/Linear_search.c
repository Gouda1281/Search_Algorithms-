

int Linear_Search(int *data, int len, int key)
{

    for(int i=0; i<len; i++)
    {
         if(data[i] == key)
         {
                return i;
         }
    }
    return -1;

}
