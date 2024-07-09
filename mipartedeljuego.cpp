// avance1 
string eleccionUsuario(int jugadorNum) {
    string jugador;
    cout << "==================================\n";
    cout << "Piedras, papel o tijera | Jugador " << jugadorNum << "\n";
    cout << "==================================\n";
    do {
        cout << " 'p' para piedra\n";
        cout << " 'pa' para papel\n";
        cout << " 't' para tijera\n";
        cout << " Elige uno: ";
        cin >> jugador;
    } while (jugador != "p" && jugador != "pa" && jugador != "t");
    return jugador;
}
// avance 2
string eleccionComputadora() {
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num) {
        case 1: return "p";
        case 2: return "pa";
        case 3: return "t";
    }
    return "";
}
void mostrareleccion(string eleccion) {
    if (eleccion == "p") {
        cout << "piedra\n";
    } else if (eleccion == "pa") {
        cout << "papel\n";
    } else if (eleccion == "t") {
        cout << "tijera\n";
    }
 // avance 3
 }

void jugar1vs1(ofstream &archivo) {
    string jugador1, jugador2;

    cout << "Jugador 1:\n";
    jugador1 = eleccionUsuario(1);
    cout << "Jugador 1 eligio: ";
    mostrareleccion(jugador1);

    cout << "Jugador 2:\n";
    jugador2 = eleccionUsuario(2);
    cout << "Jugador 2 eligio: ";
    mostrareleccion(jugador2);

    elegirGanador(jugador1, jugador2, archivo);
}

void elegirGanador(string jugador1, string jugador2, ofstream &archivo) {
    string resultado;
    // avance 4 
     if (jugador1 == jugador2) {
        resultado = "EMPATE";
        cout << "EMPATE\n";
    } else if ((jugador1 == "p" && jugador2 == "t") 
               || (jugador1 == "pa" && jugador2 == "p") 
               || (jugador1 == "t" && jugador2 == "pa")) {
        resultado = "Jugador 1 GANA!!";
        cout << "Jugador 1 GANA!!\n";
    } else {
        resultado = "Jugador 2 GANA!!";
        cout << "Jugador 2 GANA!!\n";
    }


