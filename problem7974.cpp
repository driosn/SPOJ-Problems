#include <iostream>

using namespace std;

int main(){
  int numbers[3];
  while(true){
      cin >> numbers[0] >> numbers[1] >> numbers[2];
      if(numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0) break;
      else{
        int arit_one, arit_two;
        arit_one = numbers[2] - numbers[1];
        arit_two = numbers[1] - numbers[0];
        if(arit_one == arit_two) cout << "AP " << numbers[2]+arit_one << endl;
        else{
          int geo_one, geo_two;
          geo_one = numbers[2] / numbers[1];
          geo_two = numbers[1] / numbers[0];

          if(geo_one == geo_two) cout << "GP " << numbers[2]*geo_one << endl;
        }
      };
  }
}
