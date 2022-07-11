int arr[]={0,2,1,2,2,0,1,0,1,0,1,1,0,1,0,2,2,1,0,0,2,2,1,2,2,2,0,1,1,1,0,0,0,1,1,1};
int len=sizeof(arr)/sizeof(int);

    cout << "before sort"<<endl;
    for(int i=0;i<len;i++) {
        cout << arr[i] <<" ";
    }
int high=len-1,mid=0,low=0;

    while (mid<=high)
    {
        if(arr[mid]==1)
            mid++;
        else if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
        low++,mid++;
        }
            else if(arr[mid]==2)
        {
                swap(arr[mid],arr[high]);
           high--;}
    }    cout << "\nafter sort"<<endl;
for(int i=0;i<len;i++) {

    cout << arr[i] <<" ";
}
}
