class QuickSort {
    public static int partition(int arr[], int low, int high){
        int pivot = arr[high];
        int i = low -1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]= temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i]= arr[high];
        arr[high]= temp;
        return i;
    }
    public static void quickSort(int arr[], int low , int high){
        if(low < high){
            int pidx = partition(arr, low, high);
            quickSort(arr, low, pidx -1);
            quickSort(arr, pidx +1, high);
        }
    }
    public static void main( String args[]){
        int arr[]={6,2,8,3,5,7};
        quickSort(arr, 0, arr.length -1);

        // print array 
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
    }
}
