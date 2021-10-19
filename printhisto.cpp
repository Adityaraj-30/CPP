#include <iostream> 
using namespace std;


int check(char let){
	int num = int(let); 
	if (num >= 65 && num <= 90){
		return num-65; 
	} 
	else if(num >= 97 && num < 123){
		return num-97; 
	} 
	return 27; 
} 


void generate_freq(ifstream& alpha , int lst[26]){
	char ch; 
	while(alpha.get(ch)){ 
		int ch1 = check(ch);
		if (ch1 != 27){ 
			lst[ch1]++; 
		} 
	} 
	return ;
}  

void horizontal_His(int l[26]){
	for (int i=0 ; i < 26; i++){
		cout << char(65+i) <<","<<char(97+i)<< char(124); 
		for(int j=0 ; j < l[i] ; j++){
			cout << "*"; 
		}
		cout << endl; 
	}
	cout<<" |"; 
	cout << "_____";
	return;
}

  
void vertical_Histogram(int arr[], int n){
	int maxEle = *max_element(arr, arr + n);
	for (int i = maxEle; i >= 1; i--){
		cout.width(2); 
		cout << right << i << " | "; 
		for (int j = 0; j < n; j++){                                                
            if (arr[j] >= i){                                          
                cout << " * ";
            }
            else{
            	cout << "   ";                                          
            }
        } 
        cout << "\n"; 
    } 
    for (int i = 0; i < n + 3; i++){ 		   							
        cout << "---"; 
    }  
    cout << "\n"; 
    cout << "     "; 
    for (int i=0 ; i < 26; i++){
		cout <<" "<< char(65+i) <<" ";                                                   
    } 
} 
  
// Driver code 

int main(){ 
	int arr[26]={0};
	int n = sizeof(arr) / sizeof(arr[0]); 
	ifstream alphabet; 
	alphabet.open("filename.txt");
	if(alphabet.fail()){ 
	cout << "error in opening the file";
	} 
	generate_freq(alphabet, arr); 
	cout<<"\t""\t""\t" "Horizontal Histogram";
	cout<<"\n";
	horizontal_His(arr); 
	cout<<"\n""\n""\n""\n""\n";
	cout<<"\t""\t""\t""Vertical Histogram";
	cout<<"\n";
	vertical_Histogram(arr, n);
	alphabet.close();
	return 0;

}
