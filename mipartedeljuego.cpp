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
