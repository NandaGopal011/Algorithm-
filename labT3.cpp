
 int n=100;
   int *a=new int[n];

   ifstream fin ("100.txt");

   for(int i=0;i<n;i++){

       fin>>a[i];

       }

       for(int i=0;i<n;i++)
        cout<<i<<" "<<a[i]<<endl;

}

