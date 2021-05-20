#include <iostream>
using namespace std;

int main() {

srand (time(NULL));
int playercardone = rand() % 10 + 1;
int playercardtwo = rand() % 10 + 1;
int computercardone = rand() % 10 + 1;
int computercardtwo = rand() % 10 + 1;
int hitplayerone = rand() % 10 + 1;
int hitcomputerone = rand() % 10 + 1;
int hitplayertwo = rand() % 10 + 1;
int hitcomputertwo = rand() % 10 + 1;
int hitplayerthree = rand() % 10 + 1;
int hitcomputerthree = rand() % 10 + 1;


char answer;
char answertwo;
char answerthree;

cout << "The computer has: " << computercardone << " and " << computercardtwo << endl;
cout << "You have: " << playercardone << " and " << playercardtwo << endl;
cout << "Enter 'h' for HIT, enter 's' for STAND: ";
cin >> answer;

if (answer == 'h') {
    cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << endl;
    cout << "Now you have: " << playercardone << " - " << playercardtwo << " - " << hitplayerone << endl;

        if ((computercardone + computercardtwo + hitcomputerone) == 21) {
            cout << "The computer wins!" << endl;
        }
        else if ((playercardone + playercardtwo + hitplayerone) == 21) {
            cout << "You win!" << endl;
        }
        else if ((computercardone + computercardtwo + hitcomputerone) == 21 && (playercardone + playercardtwo + hitplayerone) == 21) {
            cout << "Draw!" << endl;
        }
        else if ((computercardone + computercardtwo + hitcomputerone) > 21 && (playercardone + playercardtwo + hitplayerone) > 21) {
            cout << "Draw! Both of you are over 21." << endl;
        }
        else if ((computercardone + computercardtwo + hitcomputerone) > 21) {
            cout << "The computer is over 21, you win!" << endl;
        }
        else if ((playercardone + playercardtwo + hitplayerone) > 21) {
            cout << "You are over 21, the computer wins!" << endl;
        }
        else if ((computercardone + computercardtwo + hitcomputerone) < 21 && (playercardone + playercardtwo + hitplayerone) < 21) {
            cout << "Enter 'h' for HIT, enter 's' for STAND: ";
            cin >> answertwo;

              if (answertwo == 'h') {
                cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << " - " << hitcomputertwo << endl;
                cout << "Now you have: " << playercardone << " - " << playercardtwo << " - " << hitplayerone << " - " << hitplayertwo << endl;

                if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) == 21) {
                    cout << "The computer wins!" << endl;
                }
                else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo) == 21) {
                    cout << "You win!" << endl;
                }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) == 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo) == 21) {
                    cout << "Draw!" << endl;
                }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) > 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo) > 21) {
                    cout << "Draw! Both of you are over 21." << endl;
                }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) > 21) {
                    cout << "The computer is over 21, you win!" << endl;
                }
                else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo) > 21) {
                    cout << "You are over 21, the computer wins!" << endl;
                }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo ) < 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo) < 21) {
                    cout << "Enter 'h' for HIT, enter 's' for STAND: ";
                    cin >> answerthree;

                        if (answerthree == 'h') {
                          cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << " - " << hitcomputertwo << " - " << hitcomputerthree << endl;
                          cout << "Now you have: " << playercardone << " - " << playercardtwo << " - " << hitplayerone << " - " << hitplayertwo << " - " << hitplayerthree << endl;

                          if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) == 21) {
                              cout << "The computer wins!" << endl;
                          }
                          else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo + hitplayerthree) == 21) {
                              cout << "You win!" << endl;
                          }
                          else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) == 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo + hitplayerthree) == 21) {
                              cout << "Draw!" << endl;
                          }
                          else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) > 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo + hitplayerthree) > 21) {
                              cout << "Draw! Both of you are over 21." << endl;
                          }
                          else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) > 21) {
                              cout << "The computer is over 21, you win!" << endl;
                          }
                          else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo + hitplayerthree) > 21) {
                              cout << "You are over 21, the computer wins!" << endl;
                          }
                          else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree ) < 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo + hitplayerthree) < 21) {
                            cout << "You're both under 21. GAME OVER." << endl;
                          }

                        }

                        else if (answerthree == 's') {
                          cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << " - " << hitcomputertwo << " - " << hitcomputerthree << endl;
                          cout << "You have: " << playercardone << " - " << playercardtwo << " - " << hitplayerone << " - " << hitplayertwo << endl;

                            if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) == 21) {
                                cout << "The computer wins!" << endl;
                            }
                            else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo) == 21) {
                                cout << "You win!" << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) == 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo) == 21) {
                                cout << "Draw!" << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) > 21 && (playercardone + playercardtwo + hitplayerone + hitplayertwo) > 21) {
                                cout << "Draw! Both of you are over 21." << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) > 21) {
                                cout << "The computer is over 21, you win!" << endl;
                            }
                            else if ((playercardone + playercardtwo + hitplayerone + hitplayertwo) > 21) {
                                cout << "You are over 21, the computer wins!" << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) > (playercardone + playercardtwo + hitplayerone + hitplayertwo)) {
                                cout << "The computer is closer to 21. The computer wins!" << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) == (playercardone + playercardtwo + hitplayerone + hitplayertwo)) {
                                cout << "Draw!" << endl;
                            }
                            else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo + hitcomputerthree) < (playercardone + playercardtwo + hitplayerone + hitplayertwo)) {
                                cout << "You are closer to 21. You win!" << endl;
                            }

                        }

                }

        }

            else if (answertwo == 's') {
                cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << " - " << hitcomputertwo << endl;
                cout << "You have: " << playercardone << " - " << playercardtwo << " - " << hitplayerone << endl;

                if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) == 21) {
                    cout << "The computer wins!" << endl;
                    }
                else if ((playercardone + playercardtwo + hitplayerone) == 21) {
                        cout << "You win!" << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) == 21 && (playercardone + playercardtwo + hitplayerone) == 21) {
                        cout << "Draw!" << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) > 21 && (playercardone + playercardtwo + hitplayerone) > 21) {
                        cout << "Draw! Both of you are over 21." << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) > 21) {
                        cout << "The computer is over 21, you win!" << endl;
                    }
                else if ((playercardone + playercardtwo + hitplayerone) > 21) {
                        cout << "You are over 21, the computer wins!" << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) > (playercardone + playercardtwo + hitplayerone)) {
                        cout << "The computer is closer to 21. The computer wins!" << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) == (playercardone + playercardtwo + hitplayerone)) {
                        cout << "Draw!" << endl;
                    }
                else if ((computercardone + computercardtwo + hitcomputerone + hitcomputertwo) < (playercardone + playercardtwo + hitplayerone)) {
                        cout << "You are closer to 21. You win!" << endl;
                    }

              }

}

}

else if (answer == 's') {
  cout << "The computer now has: " << computercardone << " - " << computercardtwo << " - " << hitcomputerone << endl;
  cout << "You have: " << playercardone << " - " << playercardtwo << endl;

  if ((computercardone + computercardtwo + hitcomputerone) == 21) {
      cout << "The computer wins!" << endl;
  }
  else if ((playercardone + playercardtwo) == 21) {
      cout << "You win!" << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) == 21 && (playercardone + playercardtwo) == 21) {
      cout << "Draw!" << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) > 21 && (playercardone + playercardtwo) > 21) {
      cout << "Draw! Both of you are over 21." << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) > 21) {
      cout << "The computer is over 21, you win!" << endl;
  }
  else if ((playercardone + playercardtwo) > 21) {
      cout << "You are over 21, the computer wins!" << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) > (playercardone + playercardtwo)) {
      cout << "The computer is closer to 21. The computer wins!" << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) == (playercardone + playercardtwo)) {
      cout << "Draw!" << endl;
  }
  else if ((computercardone + computercardtwo + hitcomputerone) < (playercardone + playercardtwo)) {
      cout << "You are closer to 21. You win!" << endl;
  }

return 0;

}

}
