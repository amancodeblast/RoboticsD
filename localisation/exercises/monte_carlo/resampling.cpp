    #include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities


void ComputeProb(double a[],int length){
    //caculating the total value of the array
    double total=0.0;
    for (int i=0;i<length;i++){
        total+=a[i];
    }
    for(int i=0;i<length;i++){
        a[i]=a[i]/total;
        //printing everything
        cout<<a[i]<<endl;
    }

}




int main()
{
    //TODO: Print Probabilites each on a single line:
    int l=int(sizeof(w)/sizeof(w[0]));
    ComputeProb(w,l);
    //P1=Value
    //:
    //P5=Value
    
    
    
    
    
    
    return 0;
}