#include <stdio.h>

int main(){
    int Symptom;
    char *classification;
    printf("1.Black spots. 2. White spots. 3. Brown spots. 4. Nothing\n");
    printf("Enter your Symptom no.: ");
    scanf("%d", &Symptom);

    classification = ((Symptom<2)? "Gall-Midge" : (Symptom >2 ? "Powdery Mildew": "Anthracnose"));
    printf("You mango leaf has %s.\n", classification);

    return 0;
}
