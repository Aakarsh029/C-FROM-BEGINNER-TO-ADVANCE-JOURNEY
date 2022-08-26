 #include<iostream>
 using namespace std;
 int main()
 {
     int n,m;
     cout<<" enter no of rows and columns you want in your 2d array"<<endl;
     cin>>n>>m;
     int a[n][m];
     cout<<"enter the elements of your 2d array"<<endl;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>a[i][j];
         }
     }
     cout<<"your 2d array="<<endl;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cout<<a[i][j];
         }
         cout<<endl;
     }
     int column_start=0;
     int column_end=m-1;
     int row_start=0;
     int row_end=n-1;
     cout<<"printing of elements in spiral order"<<endl;
     while(column_start<=column_end && row_start<=row_end)
     {
         for(int col=column_start;col<=column_end;col++)
         {
             cout<<a[row_start][col]<<" ";
         }
         row_start++;
         for(int row=row_start;row<=row_end;row++)
         {
             cout<<a[row][column_end]<<" ";
         }
         column_end--;
         for(int col=column_end;col>=column_start;col--)
         {
             cout<<a[row_end][col]<<" ";
         }
         row_end--;
         for(int row=row_end;row>=row_start;row--)
         {
             cout<<a[row][column_start]<<" ";
         }
         column_start++;
     }
 }