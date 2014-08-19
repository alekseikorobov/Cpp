int main()
{
    int X,j,i;
    int A[] = {4, 9, 1, 3}; //объявление массива
    int n = sizeof(A)/sizeof(A[0]); //определение размера массива (количество элементов массива)
    
    //вывод массива A 
    
    for (i=0;i<n-1;i++)// eti momenti eshe slojnie.
    {
        for (j=0;j<n-1-i;j++)// kak eti formuli rabotayut?
        {
            if (A[j]>A[j+1])
            {
                X=A[j];
                A[j]=A[j+1];
                A[j+1]=X;
            }
        }
    }
    
    //вывод массива A 
    
    getch();
    return 0;
}
