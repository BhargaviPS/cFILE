#include<stdio.h>
   int search( int arr[], int size, int key){
       if (size==0) return 0;
   if (arr[size-1] == key)  return 1;
   else return search(arr,size-1,key);

      }
   
   int main(){
      int size, i;
      scanf("%d", &size);
      int arr[size];
      for(i=0;i<size;i++){
         scanf("%d", &arr[i]);
      }
      int key;
      scanf("%d",&key);
      int p=search(arr, size, key);
      if(p==0){
         printf("not found");
      }
      else{
         printf("Found");
      }
      
   }