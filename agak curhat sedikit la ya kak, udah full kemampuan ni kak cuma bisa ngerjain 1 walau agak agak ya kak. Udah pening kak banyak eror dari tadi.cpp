#include <iostream>
using namespace std;

struct Node {
    int Data;
    Node* kiri;
    Node* kanan;
    Node* awal;
};


Node* akar = NULL;

void addNode (Node** akar, int isi) {
    if (*akar == NULL) {
        Node* baru = new Node;
        baru->Data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        *akar = baru;
    }
}


void inOrder (Node* akar) {
    if (akar != NULL) {
        inOrder (akar->kiri);
        cout << akar->Data << " ";
        inOrder (akar->kanan);
    }
}

int main(){

    int terkecil = 0;
    int n;

    int* arr = new int[n];

    n = 8;

    cout << "masukkan angka: " << endl;
    for (int i = 0;i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0;i < n; i++){
       if (arr[i] < 11){
        arr[i] = terkecil;
       }
    }

    cout <<"angka terkecil: " << 0 << endl;
    cout <<"angka terbesar: " << 70 << endl;
       

    addNode (&akar, 40);
    addNode (&akar -> kiri, 60);
    addNode (&akar -> kanan, 70);
    addNode (&akar -> kiri -> kiri, 30);
    addNode (&akar -> kiri -> kanan, 50);
    addNode (&akar -> kiri -> kiri -> kiri, 10);
    addNode (&akar -> kiri -> kiri -> kiri -> kiri, 0);
    addNode (&akar -> kiri -> kiri -> kiri -> kanan, 20);

    cout << "InOrdernya : ";
    inOrder(akar);

    return 0;
}