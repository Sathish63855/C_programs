int countDuplicates(int freq[], int maximum)
{
    int count = 0;

    for( int i = 0; i <= maximum; i++)
    {
        if( freq[i] > 1)
        {
            count++;
        }
    }

    return count;
}