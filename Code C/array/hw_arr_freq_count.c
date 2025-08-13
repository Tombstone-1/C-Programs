#include<stdio.h>

int main(){
    int r,c;

    printf("enter range : ");
    scanf("%d",&r);

    int arr[r], count[r];

    printf("enter ele : \n");    
    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<r; i++){
        c=1;
        if(arr[i] != -1){         // for not visiting same element again
            for(int j=i+1; j<r; j++){
                if(arr[i] == arr[j]){
                    c++;          // increase count
                    arr[j] = -1;    // now store -1 for 2,3... occurance. so we wont be visit them again.
                } 
            }
            count[i] = c;     //store count in new arr.
        }
    }
    
    for(int i=0; i<r; i++){
        if(arr[i]!= -1){     // here we are checking -1 element .not to be printed.
            printf("\n%d : %d times",arr[i],count[i]);
        }
    }

}

/*  alternate way

int main(){
    int r,count;

    printf("enter range : ");
    scanf("%d",&r);

    int arr[r], seen[r];

    printf("enter ele : \n");
    
    for(int i=0; i<r; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<r; i++){
        
        if(seen[i] == 1){
            continue;     // skip like break, go to.
        }
        
        count = 0;
        for(int j=0; j<r; j++){

            if(arr[i] == arr[j]){
                count++;
                seen[j] = 1;        // matched ,increment and mark.
            }
        }

        printf("\n %d : %d times", arr[i], count);
    }
}
*/