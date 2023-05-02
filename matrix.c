#include<stdio.h>
void main(){
    int i,r,j,m_max=0,c_max=0;
    system("cls");
    printf("Enter the no. of students:");
    scanf("%d",&r);
    long long int a[r][3],m,c;
    for (i=0;i<r;i++){
        for(j=0;j<3;j++){
            if(j==0){
                if(i+1==1){
                printf("Enter the Roll No. of the %dst Student: ",i+1);
                scanf("%lli",&a[i][j]);}
                if(i+1==2){
                printf("Enter the Roll No. of the %dnd Student: ",i+1);
                scanf("%lli",&a[i][j]);}
                if(i+1==3){
                printf("Enter the Roll No. of the %drd Student: ",i+1);
                scanf("%lli",&a[i][j]);}
                if(i+1>=4){
                printf("Enter the Roll No. of the %dth Student: ",i+1);
                scanf("%lli",&a[i][j]);}
            }
            if(j==1){
                printf("Enter the Maths Marks: ");
                scanf("%lli",&a[i][j]);
                if(a[i][j]>m_max){
                    m_max=a[i][j];
                    m=a[i][0];
                }
            }
            if(j==2){
                printf("Enter The CS Marks: ");
                scanf("%lli",&a[i][j]);
                if(a[i][j]>c_max){
                    c_max=a[i][j];
                    c=a[i][0];
                }
            }
        }
    }

    printf("The Report is coming.....\n\n");
    printf("Roll Number    Maths    CS\n");
    for (i=0;i<r;i++){
        for(j=0;j<3;j++){
            printf("%lli\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe Highest Marks in Maths is %d, awarded to Roll No. %lld\n",m_max,m);
    printf("The Highest Marks in CS is %d, awarded to Roll No. %lld\n",c_max,c);
}
