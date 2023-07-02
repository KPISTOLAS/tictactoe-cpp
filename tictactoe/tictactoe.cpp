# include <iostream>
# include <string>
using namespace std;

void pos (){
    for(int a = 0; a < 3; a++)
  {
    for(int b = 0; b < 3; b++)
    {
      cout <<a << "." <<b  ;
      if (b !=2){
          cout << "|";
          }
    }
    cout << endl;
    if (a!=2){
    cout << "-----------";
    }
    cout << endl;
  } 
    }

void rintc (char A[3][3]){
	for(int a = 0; a < 3; a++)
  {
    for(int b = 0; b < 3; b++)
    {
      cout << A[a][b] ;
      if (b !=2){
          cout << "|";
          }
    }
    cout << endl;
    if (a!=2){
    cout << "-----";
    }
    cout << endl;
  } 
}

bool findtf (char A[3][3] ,char &winner) {
    int i;
    int pl = 0;
    char temp = A[0][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[i][0] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[0][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    temp = A[0][1];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[i][1] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[1][1];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    temp = A[0][2];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[i][2] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[0][2];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    
    
    temp = A[0][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[0][i] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[0][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    temp = A[1][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[1][i] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[1][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    temp = A[2][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[2][i] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[2][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    
    temp = A[0][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[i][i] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[0][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    temp = A[2][0];
    for ( i =0 ; i<3 ; ++i){
        if (temp == A[2-i][i] && temp !=' ' ){
            pl++;
            }
        }
        winner = A[0][0];
    if (pl==3){
        return true ;
        }
    pl=0;
    
    return false ;
    }

int main (){
	cout << "lets play tic tac toe"<< endl;
	char p1[100];
	char p2[100];
	cout << "give names to players (100 digits) "<< endl;
	gets(p1);
	cout << "player 1 is called "<< p1 << endl;
	gets(p2);
	cout << "player 2 is called "<< p2 << endl;
	cout << "positions"<<endl; 
	pos ();
	char A[3][3]= {
                        {' ',' ',' '},
                        {' ',' ',' '},
                        {' ',' ',' '}
                    };
                   
	rintc(A );	
	again:
	cout << p1<< " is x" << endl;
	cout << p2 << " is o" << endl;
	bool flag = true ;
	bool f;
	char winner;
	int i = 1 ;
	int pos1 , pos2;
	int player;
	while (flag == true){
	    if (i==1){
	        cout << p1<< "  play , give positions" << endl;
	        player=1;
	        i=2;
	        }
	        else {
	        cout << p2<< " play , give positions " << endl;
	        player=2;
	        i=1;
	        }
	        do {
	            cin >> pos1 ;
	            cin>> pos2;
	            if (A[pos1][pos2]==' '){
	                f= true;
	                }
	                else {
	                    f= false;
	                    cout<< "give new location"<< endl;
	                    }
	            
	            }while ( !(f)  );
	            if (player == 1){
	                A[pos1][pos2]= 'x';
	                }
	            else {
	                A[pos1][pos2]= 'o';
	                }
	            rintc(A );	

	       f = findtf (A , winner);
	       if (f) {
	           flag = false ;
	           }
	    }
	if (winner == 'x' ){
	    cout << "the winner is "<< p1 << endl;
	    }
	else {
	    cout << "the winner is "<< p2 << endl;
	    }
	
	cout << "do you want to play again ? "<< endl;
	cout << "say 1 for yes or 0 for no "<<endl;
	int an;
	do {
	cin >> an;
	}while (!( an == 1 || an== 0));
if (an == 1){
    
    goto again;
    }
cout << "thank you" << endl;
	return 0;
}

