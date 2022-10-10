#include <iostream>
#include <ctime>
#include <fstream>



using namespace  std;
void log11110000();
void log11110001();
void log11110002();

int main() {

    long arithmoslog;
    int pinlog;


        cout << "Παρακαλώ πληκτρολογίστε το όνομα του λογαριασμού σας : ";
        cin >> arithmoslog;
        cout << "Παρακαλώ πληκτρολογήστε τον αριθμό pin του λογαριασμού σας :";
        cin >> pinlog;
        system("clear");

    if (arithmoslog==11110000 && pinlog==1234)
    {
        log11110000();

    }
    else if (arithmoslog==11110001 && pinlog==5678)
    {
        log11110001();
    }
    else if (arithmoslog==11110002 && pinlog==2345)
    {
        log11110002();
    }
    else
        cout<<"ERROR !!! : Το όνομα του Λογαριασμού/Κωδικός pin είναι λαθασμένα !! ";



}
string Date1() {
    /* <ctime> (time.h)==> Αυτό το αρχείο κεφαλίδας περιέχει ορισμούς των λειτουργιών για λήψη και χειρισμό πληροφοριών ημερομηνίας και ώρας. είναι μία κεφαλίδα της γλώσσας C */

    // Τρέχον ημερομινία και ώρα στο συγκεκριμένο σύστημα που θα τρέχει στο μηχάνημα που θα τρέχει το πρόγραμμα
    time_t now = time(0);//time_t = Είναι o τύπος χρόνου (now χρόνος τώρα) timer =0 γιατί ο χρόνος ξεκινάει από το 0

    // Μετατροπή τώρα σε μορφή συμβολοσειράς  για αυτόν τον λόγο βάζω και char
    char *date_time = ctime(&now);//To ctime είναι η μέθοδος η οποία χρησημοποιώ το (&now) δηλώνει τον χρόνο την τωρινή στιγμή
    string out(date_time);
    cout<<"Ημερομινία " << (date_time);//εδώ εμφανίζουμε το μήνυμα που θσ βγάζει η συνάρτηση  στην οθόνη που θα βλέπει ο χρήστης παρακάτω από την απόδειξη αλλά και για το ιστορικό των συναλλαγών μας

    return out;//Εδώ επιστρέφω
}


string myText;
void log11110000(){


    int choice,choiceposo;
    double posokatathesis;

    do {
        /* code */
        cout << "1. Ανάληψη Χρημάτων " << endl;
        cout << "2. Κατάθεση Χρημάτων " << endl;
        cout << "3. Κινήσεις Λογαριασμού" << endl;


        cout << " Παρακαλώ επιλέξτε ένα από τα παραπάνω : ";
        cin >> choice;//Εδώ μπαίνει η επιλογή του χρήστη για το αν θέλει ανάληψη κατάθεση ή να δεί τις κινήσεις του λογαριασμού του είναι το πρώτο menu
        system("clear");

        switch (choice) {
            case 1: {
                do {
                    /* Αυτό είναι το menu της Ανάληψης των χρημάτων  */
                    cout <<"**********/Ανάλυψη χρημάτων/**********"<<endl;
                    cout << "1. 100 Ευρώ " << endl;
                    cout << "2. 200 Ευρώ " << endl;
                    cout << "3. 300 Ευρώ " << endl;
                    cout << "4. 400 Ευρώ " << endl;


                    cout << "Παρακαλώ επιλέξτε το ποσό που θέλετε ";
                    cin >> choiceposo;//Εδώ ο χρήστης θα επιλέξει πιο ποσό θέλει να κάνει ανάληψη
                    system("Clear");


                    switch (choiceposo) {
                        case 1 : {


                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 100,00 Ευρώ" << endl;
                            Date1();//Υπολογισμός ημερομινίας αυτόματα βάση του μηχανήματος

                            cout << "******************************" << endl;

                            cout<<endl;


                            ofstream myFile(to_string(11110000) + ".txt", std::ios_base::app);
                            if (!myFile.is_open())
                                return;

                            myFile  <<Date1() <<"\t"<< "Ανάληψη" << "\t" << "100,00" << endl;

                            myFile.close();



                            //Επειδή τρέχει σε Linux αλλιώς σε windows θα ήταν ( "cls");
                            break;
                        }
                        case 2: {
                            ofstream myFile("11110000.txt");
                            if (!myFile.is_open())
                                return;

                            myFile  << Date1() << "\t" << "Ανάληψη" << "\t" << "200,00" << endl;
                            myFile.close();



                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 200,00 Ευρώ" << endl;
                            Date1();

                            cout << "******************************" << endl;
                            cout<<endl;


                            break;
                        }
                        case 3: {
                            ofstream myFile("11110000.txt");
                            if (!myFile.is_open())
                                return;


                            myFile <<Date1() << "\t" << "Ανάληψη" << "\t" << "300,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 300,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;
                            cout<<endl;


                            break;
                        }
                        case 4: {
                            ofstream myFile("11110000.txt");
                            if (!myFile.is_open())
                                return;

                            myFile << Date1() << "\t" << "Ανάληψη" << "\t" << "400,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 400,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;
                            cout<<endl;




                            break;
                        }


                        default:
                            break;
                    }



            }
                while (choiceposo == 0);



                break;
        }

            case 2: {
                /* Αν επιλέξει την επιλογή θα του εμφανηστεί μία άλλη οθόνη */
                cout <<"**********/Κατάθεση χρημάτων/**********"<<endl;
                cout << "Παρακαλω πληκτρολογίστε το ποσό που θα θέλατε να καταθέσετε : ";
                cin >> posokatathesis;
                cout <<"***************************************"<<endl;
                cout<<endl;
                system("clear");

                ofstream myFile("11110000.txt");
                if (!myFile.is_open())
                    return;

                myFile << Date1() << "\t" << "Κατάθεση " << "\t" << posokatathesis << endl;
                myFile.close();

                break;
            }
            case 3: {//Εδώ εμφανίζει το τις κινήσεις του λογαριασμού
                ifstream MyReadFile("11110000.txt");
                while (getline (MyReadFile, myText)) {
                    // Output the text from the file
                    cout << myText;
                    MyReadFile.close();
                }
                system("clear");
                

                break;
            }


            default:
                return;
        }
    } while (choice != 0);



 }



void log11110001(){


    int choice,choiceposo;
    double posokatathesis;
    do {
        /* code */
        cout << "1. Ανάληψη Χρημάτων " << endl;
        cout << "2. Κατάθεση Χρημάτων " << endl;
        cout << "3. Κινήσεις Λογαριασμού" << endl;

        cout << " Παρακαλώ επιλέξτε ένα από τα παραπάνω : ";
        cin >> choice;//Εδώ μπαίνει η επιλογή του χρήστη για το αν θέλει ανάληψη κατάθεση ή να δεί τις κινήσεις του λογαριασμού του είναι το πρώτο menu

        switch (choice) {
            case 1: {
                do {
                    /* Αυτό είναι το menu της Ανάληψης των χρημάτων  */
                    cout <<"**********/Ανάλυψη χρημάτων/**********"<<endl;
                    cout << "1. 100 Ευρώ " << endl;
                    cout << "2. 200 Ευρώ " << endl;
                    cout << "3. 300 Ευρώ " << endl;
                    cout << "4. 400 Ευρώ " << endl;

                    cout << "Παρακαλώ επιλέξτε το ποσό που θέλετε ";
                    cin >> choiceposo;//Εδώ ο χρήστης θα επιλέξει πιο ποσό θέλει να κάνει ανάληψη

                    system("clear");
                    cout<<endl;
                    switch (choiceposo) {
                        case 1 : {

                            ofstream myFile(to_string(11110001) + ".txt", std::ios_base::app);
                            if (!myFile.is_open())
                                return;

                            myFile <<"\t" << Date1() << "\t" << "Ανάληψη" << "\t" << "100,00" << endl;

                            myFile.close();



                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 100,00 Ευρώ" << endl;
                            Date1();//Υπολογισμός ημερομινίας αυτόματα βάση του μηχανήματος

                            cout << "******************************" << endl;
                            cout<<endl;


                            //Επειδή τρέχει σε Linux αλλιώς σε windows θα ήταν ( "cls");
                            break;
                        }
                        case 2: {
                            ofstream myFile("11110001.txt");
                            if (!myFile.is_open())
                                return;

                            myFile  << Date1() << "\t" << "Ανάληψη" << "\t" << "200,00" << endl;
                            myFile.close();



                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 200,00 Ευρώ" << endl;
                            Date1();

                            cout << "******************************" << endl;
                            cout<<endl;


                            break;
                        }
                        case 3: {
                            ofstream myFile("11110001.txt");
                            if (!myFile.is_open())
                                return;


                            myFile << Date1() << "\t" << "Ανάληψη" << "\t" << "300,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 300,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;
                            cout<<endl;



                            break;
                        }
                        case 4: {
                            ofstream myFile("11110001.txt");
                            if (!myFile.is_open())
                                return;

                            myFile << Date1() << "\t" << "Ανάληψη" << "\t" << "400,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 400,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;
                            cout<<endl;




                            break;
                        }

                        default:
                            break;
                    }


                }
                while (choiceposo == 0);
                system("clear");


                break;
            }
            case 2: {
                /* Αν επιλέξει την επιλογή θα του εμφανηστεί μία άλλη οθόνη */
                cout <<"**********/Κατάθεση χρημάτων/**********"<<endl;

                cout << "Παρακαλω πληκτρολογίστε το ποσό που θα θέλατε να καταθέσετε : ";
                cin >> posokatathesis;
                cout <<"***************************************"<<endl;

                ofstream myFile("11110001.txt");
                if (!myFile.is_open())
                    return;


                myFile << Date1() << "\t" << "Κατάθεση" << "\t" << posokatathesis << endl;
                myFile.close();

                break;
            }
            case 3: {//Εδώ εμφανίζει το τις κινήσεις του λογαριασμού
                ifstream myFile (to_string(11110001) + ".txt");
                if (!myFile.is_open())

                break;
            }

            default:
                return;
        }
    } while (choice != 0);


}



void log11110002(){


    int choice,choiceposo;
    double posokatathesis;
    do {
        /* code */
        cout << "1. Ανάληψη Χρημάτων " << endl;
        cout << "2. Κατάθεση Χρημάτων " << endl;
        cout << "3. Κινήσεις Λογαριασμού" << endl;

        cout << " Παρακαλώ επιλέξτε ένα από τα παραπάνω : ";
        cin >> choice;//Εδώ μπαίνει η επιλογή του χρήστη για το αν θέλει ανάληψη κατάθεση ή να δεί τις κινήσεις του λογαριασμού του είναι το πρώτο menu

        switch (choice) {
            case 1: {
                do {
                    /* Αυτό είναι το menu της Ανάληψης των χρημάτων  */
                    cout <<"**********/Ανάλυψη χρημάτων/**********"<<endl;
                    cout << "1. 100 Ευρώ " << endl;
                    cout << "2. 200 Ευρώ " << endl;
                    cout << "3. 300 Ευρώ " << endl;
                    cout << "4. 400 Ευρώ " << endl;

                    cout << "Παρακαλώ επιλέξτε το ποσό που θέλετε ";
                    cin >> choiceposo;//Εδώ ο χρήστης θα επιλέξει πιο ποσό θέλει να κάνει ανάληψη
                    system("clear");
                    switch (choiceposo) {
                        case 1 : {

                            ofstream myFile(to_string(11110002) + ".txt", std::ios_base::app);
                            if (!myFile.is_open())
                                return;

                            myFile <<Date1()<< "\t" << "Ανάληψη" << "\t" << "100,00" << endl;

                            myFile.close();



                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 100,00 Ευρώ" << endl;
                            Date1();//Υπολογισμός ημερομινίας αυτόματα βάση του μηχανήματος

                            cout << "******************************" << endl;


                            //Επειδή τρέχει σε Linux αλλιώς σε windows θα ήταν ( "cls");
                            break;
                        }
                        case 2: {
                            ofstream myFile("11110002.txt");
                            if (!myFile.is_open())
                                return;

                            myFile  <<Date1()<< "\t" << "Αναληψη" << "\t" << "200,00 Ευρω " << endl;
                            myFile.close();



                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 200,00 Ευρώ" << endl;
                            Date1();

                            cout << "******************************" << endl;


                            break;
                        }
                        case 3: {
                            ofstream myFile("11110002.txt");
                            if (!myFile.is_open())
                                return;


                            myFile <<Date1()<< "\t" << "Ανάληψη" << "\t" << "300,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 300,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;


                            break;
                        }
                        case 4: {
                            ofstream myFile("11110002.txt");
                            if (!myFile.is_open())
                                return;

                            myFile << Date1() << "\t" << "Ανάληψη" << "\t" << "400,00" << endl;
                            myFile.close();
                            cout << "******************************" << endl;
                            cout << "Αριθμός λογαριασμού: 1111xxxx" << endl;
                            cout << "Ποσό: 400,00 Ευρώ" << endl;
                            Date1();
                            cout << "******************************" << endl;




                            break;
                        }

                        default:
                            break;
                    }


                }
                while (choiceposo == 0);
                system("clear");


                break;
            }
            case 2: {
                /* Αν επιλέξει την επιλογή θα του εμφανηστεί μία άλλη οθόνη */
                cout <<"**********/Κατάθεση χρημάτων/**********"<<endl;
                cout << "Παρακαλω πληκτρολογίστε το ποσό που θα θέλατε να καταθέσετε : ";
                cin >> posokatathesis;
                cout <<"***************************************"<<endl;


                ofstream myFile("11110002.txt");
                if (!myFile.is_open())
                    return;

                myFile << Date1() << "\t" << "Κατάθεση" << "\t" << posokatathesis << endl;
                myFile.close();

                break;
            }
            case 3: {
                ifstream myFile (to_string(11110002) + ".txt");
                if (!myFile.is_open())

                break;
            }

            default:
                return;
        }
    } while (choice != 0);


}











