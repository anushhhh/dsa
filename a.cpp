// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int nums[n];
//     cout<<"Enter the numbers: ";
//     while()
//     {
//         cin>>nums[j];
//     }
//     int sum = 0;
//     for(int i=0; i<5; i++){
//         if(nums[i]>0){
//             sum+=nums[i];
//         }
//         else if(nums[i]<0){
//             break;
//         }
//     }
//     cout<<"Sum of Numbers: "<<sum;
// }
#include<iostream>
using namespace std;
int main(){
    int i,sum;
    while(true){
        cout<<"enter a no.";
        cin>>i;
        if(i<0){
            break;
        }
        sum+=i;
    }
    cout<<"sum is"<<sum<<endl;
    return 0;
}